N=1

while N>=0 :
    N = int(input())
    if N==-1 : break
    lst = []

    for i in range (1, N):
        if N%i==0 : lst.append(i)

    if N==sum(lst) :
        lst = map(str, lst)
        print(N, '=', ' + '.join(lst))
    
    else : print('%d is NOT perfect.' % N)