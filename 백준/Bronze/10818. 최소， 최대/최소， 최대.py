N = int(input())
A = list(map(int, input().split()))

minA = min(A)
maxA = max(A)

print("%d %d" % (minA, maxA))