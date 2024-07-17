L = int(input())
S = [ord(i)-96 for i in input()]

R = 31
M = 1234567891

for i in range(len(S)) :
    S[i] = (S[i] * (R**(i)))

print(sum(S)%M)