S = input()
word = 0

if S[0] != ' ' : word += 1

for i in range(0, len(S)-1) :
    if S[i] == ' ' and S[i+1] != ' ' : word += 1

print(word)