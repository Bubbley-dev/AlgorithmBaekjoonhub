Chess = [1, 1, 2, 2, 2, 8]
piece = list(map(int, input().split()))

for i in range(0, len(Chess)) :
    Chess[i] -= piece[i]

for i in range(0, len(Chess)) :
    if i < len(Chess)-1 : print(Chess[i], end=" ")
    else : print(Chess[i])