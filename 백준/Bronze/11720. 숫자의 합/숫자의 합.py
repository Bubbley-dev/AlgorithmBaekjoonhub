N = int(input())

S = input()
s = list()
sum = 0

for i in S :
    s.append(i)

for i in s :
    sum += int(i)

print(sum)