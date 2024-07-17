T = int(input())

for i in range (1, T+1) :
    Cent = [0 for i in range (4)]
    C = int(input())
    while C > 0 :
        if C >= 25 : Cent[0] += 1 ; C -= 25
        elif C >= 10 : Cent[1] += 1 ; C -= 10
        elif C >= 5 : Cent[2] += 1 ; C -= 5
        elif C >= 1 : Cent[3] += 1 ; C -= 1
    
    print(" ".join(map(str,Cent)))