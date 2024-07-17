T = int(input())

a, b = 0, 1

for T in range(1, T+1) :
    if (a+b)%2 == 0 :
        b += 1
        if a != 1 : a -= 1
    else :
        a += 1
        if b != 1 : b -= 1

print("%d/%d" % (a,b))