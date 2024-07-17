# 숫자를 입력받아서 저장
A = int(input())
B = int(input())

# 두번째 수는 각각 자릿수별로 리스트로 저장

listB = list()

for i in str(B) :
    listB.append(i)

#A를 각 자릿수와 곱해서 출력

i = len(listB) - 1

while i >= 0 :
    print(A * int(listB[i]))
    i -= 1

#최종 값 출력
print(A * B)