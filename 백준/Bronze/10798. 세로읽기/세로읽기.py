N, M = 5, 15

A = [["" for col in range(0, M)] for row in range(0, N)] #N*M = [N][M] 2차원배열 입력

for i in range(0, N):
    str = []
    for l in input() :
        str.append(l)
    for j in range(0, len(str)):
        A[i][j] = str[j]

word = list()
for j in range(0, M):
    for i in range(0, N):
        if A[i][j] != "" : word.append(A[i][j])
        else : continue

for i in word :
    print(i, end="")