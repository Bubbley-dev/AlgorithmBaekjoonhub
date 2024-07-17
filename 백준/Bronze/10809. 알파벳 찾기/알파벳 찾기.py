S = input()

Alphabet = "abcdefghijklmnopqrstuvwxyz"

for i in Alphabet :
    if i != 'z' : print(S.find(i), end=" ")
    else : print(S.find(i))