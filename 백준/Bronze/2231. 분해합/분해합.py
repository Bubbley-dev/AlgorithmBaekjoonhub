M = int(input())

N = 1

while N < M :
    N = str(N)
    Num = [int(i) for i in N]
    N = int(N)
    if sum(Num) + N == M : print(N) ; break
    else : N += 1

if N == M : print(0)