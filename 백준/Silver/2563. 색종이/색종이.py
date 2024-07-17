T = int(input())

N, M = 100, 100

A = [[0 for col in range(0, M)] for row in range(0, N)] #도화지

for a in range(0, T) :                  #색종이
    I, J = map(int, input().split())
    for i in range(I, I+10):
        for j in range(J, J+10):
            A[i][j] = 1

Sum = 0
for i in range(0, N):
    for j in range(0, M):
        Sum += A[i][j]

print(Sum)