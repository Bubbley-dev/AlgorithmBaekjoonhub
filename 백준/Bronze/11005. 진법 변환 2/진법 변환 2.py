N, B = map(int, input().split())

S = []
i = 30

while i >= 0 :                           #몫 저장
    if (B ** i) > 1000000000 : i -= 1
    elif len(S) == 0 and N/(B**i) < 1 : i -=1 ; continue
    else :
        A = int(N/(B**i))
        S.append(A)
        N -= A * (B**i)

        i -= 1

for i in range(len(S)) :                            #9보다 큰 숫자 영문변환
    if S[i] > 9 : S[i] = chr(S[i]+55)
    else : S[i] = str(S[i])

print(''.join(S))