N, X = map(int, input().split())

A = map(int, input().split())
B = list()

for i in A :
    if i < X : B.append(i)

print(B[0], end="")

for i in range(1, len(B)) :
    print(" %d" % B[i], end="")