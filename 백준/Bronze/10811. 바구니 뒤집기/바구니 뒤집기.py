# N=바구니 갯수, M=시행 횟수
N, M = map(int, input().split())

B = [0]
for k in range (1, N+1) :
    B.append(k)

for M in range(1, M+1) :
    i, j = map(int, input().split())
    b = B[i:j+1]
    b.reverse()
    for k in range(i, j+1):
        B[k] = b[0]
        b.pop(0)

print(B[1], end="")
for k in range(2, len(B)):
    print(" %d" % B[k], end="")