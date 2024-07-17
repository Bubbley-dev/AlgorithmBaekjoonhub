N = int(input())

Arr = list(map(int, input().split()))

count = 0

for i in Arr :
    j = 2
    for j in range(2, i+1) :
        if i % j == 0 : break
    if j == i : count += 1

print(count)