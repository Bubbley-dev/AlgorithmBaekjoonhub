N, M = 9, 9

A = [[0 for col in range(0, M)] for row in range(0, N)]

for i in range(0, N):
    A[i] = list(map(int, input().split()))

Max = A[0][0]

row, col = 0, 0


for i in range(0, N):
    for j in range(0, M):
        k = A[i][j]
        if k > Max : 
            Max = k
            row = i ; col = j

print(Max)
print(row+1, col+1)