import math

A, B, V = map(int, input().split())


Day = math.ceil((V-A)/(A-B)+1)


print(Day)