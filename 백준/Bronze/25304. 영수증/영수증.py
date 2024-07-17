X = int(input()) #영수증에 적힌 총 금액
N = int(input()) #영수증에 적힌 구매한 물건의 종류의 수

Amount = 0 #구매한 금액 합

for N in range(1, N+1):
    a, b = map(int, input().split()) #구매한 물건의 금액과 갯수
    Amount += a * b

if X == Amount : print("Yes")
else : print("No")