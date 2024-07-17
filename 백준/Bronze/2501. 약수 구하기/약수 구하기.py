N, K = map(int, input().split())

i=1
k=0


while k<K and i<=N :
    if N%i == 0 :
        result = i
        k += 1
        i += 1
    else : i += 1

if k<K : print(0)
else : print(result)