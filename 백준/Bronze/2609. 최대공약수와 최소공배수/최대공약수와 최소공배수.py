A, B = map(int, input().split())

yak = 1

N = 2

#ㄴ자 식 구하기
while (A>1 and B>1) :
    if A%N == 0 and B%N == 0 :
        yak *= N
        A, B = int(A/N), int(B/N)
        N = 2
    else : N += 1
    if N > A and N > B : break

print(yak)
print(yak * A * B)