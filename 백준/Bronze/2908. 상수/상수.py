a, b = map(str, input().split())

A = list()
B = list()

for i in a :
    A.append(int(i))
for i in b :
    B.append(int(i))

A.reverse()
B.reverse()

for i in range (0, 3) :
    if A[i] == B[i] : continue
    elif A[i] > B[i] :
        for j in range (0, len(A)) :
            print(A[j], end="")
        break
    else : 
        for j in range (0, len(B)) :
            print(B[j], end="")
        break