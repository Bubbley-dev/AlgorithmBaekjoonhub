import sys
input = sys.stdin.readline

T = int(input())

numbers = []

for _ in range(T):
    numbers.append(int(input()))

result = sorted(numbers)

for i in result:
    print(i)