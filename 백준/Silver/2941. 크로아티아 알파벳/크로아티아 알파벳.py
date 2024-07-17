S=input()

L = list()

for i in S :
    L.append(i)

L.append(' ')
L.append(' ')

i = 0
while i < len(L)-1 :

    if L[i] == '=' : L.pop(i) 
    elif L[i] == '-' : L.pop(i) 
    elif L[i] == 'd' and L[i+1] == 'z' and L[i+2] == '=' : L.pop(i) 
    elif (L[i] == 'l' or L[i] == 'n') and L[i+1] == 'j' : L.pop(i)
    else : i += 1

L.pop(-1)
L.pop(-1)

print(len(L))
