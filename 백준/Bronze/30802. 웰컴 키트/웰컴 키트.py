N = int(input())
S, M, L, XL, XXL, XXXL = map(int, input().split())
T, P = map(int, input().split())

Shirts = [S, M, L, XL, XXL, XXXL]

for i in range(len(Shirts)) :
    if Shirts[i] % T > 0 :
        Shirts[i] = int(Shirts[i] / T) + 1
    else : Shirts[i] = int(Shirts[i] / T)
    

print(sum(Shirts))
print(int(N/P), N%P)