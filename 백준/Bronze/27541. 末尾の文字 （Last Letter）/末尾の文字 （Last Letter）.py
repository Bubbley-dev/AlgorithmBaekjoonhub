N = int(input())
S = [i for i in input()]

if S[N-1] == "G" : S = S[:N-1]
else : S.append("G")

print("".join(S))