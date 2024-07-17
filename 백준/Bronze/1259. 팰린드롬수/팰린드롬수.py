T = [i for i in input()]

while T[0] != '0' :
    R = "yes"
    for i in range (len(T)):
        if T[i] != T[len(T)-i-1] : 
            R = "no"
            break
    if T != [0] : print(R)
    T = [i for i in input()]