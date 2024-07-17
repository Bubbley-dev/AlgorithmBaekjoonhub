A, B = 1, 1

while A!=0 or B!=0 :
    A, B = map(int, input().split())
    if A==B==0 : break

    if B%A == 0 : print('factor')
    elif A%B == 0 : print('multiple')
    else : print('neither')