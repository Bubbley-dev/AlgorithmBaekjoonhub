N = int(input())

result = 1

while N > 1:
    result *= N
    N -= 1

print(result)