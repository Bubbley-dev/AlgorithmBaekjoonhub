A = int(input())
B = int(input())
C = int(input())

Mul = A*B*C

Mul_l = [int(i) for i in str(Mul)]

for i in range (0, 10):
    print(Mul_l.count(i))