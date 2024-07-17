S = [i for i in input()]

for i in range(len(S)) :
    if 64<ord(S[i])<91 : S[i] = chr(ord(S[i])+32)
    elif 96<ord(S[i])<123 : S[i] = chr(ord(S[i])-32)

print("".join(S))