N = int(input())

result = 1
while N > 0:
    result *= N
    N -= 1

numbers = [int(i) for i in str(result)]
count = 0

for i in reversed(numbers):
    if not i:
        count += 1
    else:
        break

print(count)