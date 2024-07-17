T = int(input())

A = 1 #사각형의 칸수

for i in range (1, T+1) : A *= 4

print(int((A**(1/2)+1)**2))