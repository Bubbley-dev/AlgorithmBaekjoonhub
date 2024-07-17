M = int(input())
N = int(input())

Arr = (i for i in range(M, N+1))
Num = []

for i in Arr :
    j = 2
    for j in range(2, i+1) :
        if i % j == 0 : break
    if j == i : Num.append(i)

if len(Num)==0 : print(-1)
else : print(sum(Num)) ; print(Num[0])
