S = input()

B = 1

for i in range (0, int(len(S)/2)) :
    if S[i] == S[-i-1] : continue
    else : B = 0  ; break

print(B)