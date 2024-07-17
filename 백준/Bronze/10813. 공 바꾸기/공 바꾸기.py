N, M = map(int, input().split())

Basket = [0] * (N+1) #번호 헷갈리지 않게 0번 바구니에는 0번 공을 채워놓음
for k in range (1, N+1) :
    Basket[k] = k


for k in range (M) :
    i, j = map(int, input().split())
    Basket[i], Basket[j] = Basket[j], Basket[i]

print(Basket[1], end="")

for k in range (2, len(Basket)) :
    print(" %d" % Basket[k], end="")