N, M, K = map(int, input().split())

i = 0

while i < N :
    if M*i <= K < M * (i+1) : n = i ; break
    else : i += 1

m = K%M

print(n, m)