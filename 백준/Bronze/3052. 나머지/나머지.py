# 수 입력 10개 받아서 나머지 리스트 작성
N = list()
for i in range (0, 10) :
    a = int(input())%42
    N.append(a)

# 모든 수가 다를 때까지 검토, 같으면 앞에 것만 남기고 삭제
i = 0
while i < len(N) :
    j = 1
    while i + j < len(N):
        if N[i] == N[i+j] : N.pop(i+j)
        else : j +=1
    i += 1

print(len(N))