N, K = map(int, input().split())

# N부터 K개 곱하기
front = 1
for i in range(N, N-K, -1) :
    front *= i

back = 1
# K부터 1까지 곱하기
for i in range (K, 0, -1) :
    back *= i

# 나누기
print(front//back)