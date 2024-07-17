N = int(input())

i=0
while i<N :
    j = 2*i+1
    k = N-1-i
    print(" " * k, end="")
    print("*" * j)
    i += 1

i -= 2

while i>=0 :
    j = 2*i+1
    k = N-1-i
    print(" " * k, end="")
    print("*" * j)
    i -= 1