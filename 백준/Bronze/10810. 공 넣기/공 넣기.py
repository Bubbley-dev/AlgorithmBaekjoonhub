N, M = map(int, input().split()) #바구니 N개, 공 넣을 횟수 M회

Arr = [0] * N #아무것도 들지 않은 바구니 N개 생성

for M in range(1, M+1) : #공 넣는 과정 M회 반복
    i, j, k = map(int, input().split()) #i번부터 j번까지 공 k를 넣어라.
    
    for a in range(i-1, j) :
        Arr[a] = k              #i~j까지 바구니 공을 k로 교체

print(Arr[0], end="")
for N in range(1, N) :
    print(" %d" % Arr[N], end="")