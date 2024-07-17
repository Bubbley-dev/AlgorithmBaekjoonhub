N = int(input())

List = map(int, input().split())

v = int(input())

Number = 0

for i in List :
    if i == v : Number += 1

print(Number)