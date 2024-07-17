N, M = map(int, input().split())

A = [[0 for col in range(0, M)] for row in range(0, N)]

for i in range(0, N):
    A[i] = list(map(int, input().split()))

B = [[0 for col in range(0, M)] for row in range(0, N)]

for i in range(0, N):
    B[i] = list(map(int, input().split()))

for i in range(0, N):
    for j in range(0, M):
        A[i][j] += B[i][j]

for i in range(0, N):
    for j in range(0, M):
        if j != M-1 : print(A[i][j], end=" ")
        else : print(A[i][j])