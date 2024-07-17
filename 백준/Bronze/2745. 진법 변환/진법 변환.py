N, B = map(str, input().split())

S = [i for i in N] # B진법 수 N 문자열->리스트
B = int(B)

#계산의 편의를 위해 i번째 항이 B의 i제곱이 되도록 리스트 Reverse
S.reverse()

result=0

for i in range(len(S)) :
    if ord('A') <= ord(S[i]) <= ord('Z') : S[i] = ord(S[i])-55 #알파벳으로 된 숫자 변환
    else : S[i] = int(S[i])

    result += S[i] * (B**i)

print(result)