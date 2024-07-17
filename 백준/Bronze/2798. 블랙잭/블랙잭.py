N, M = map(int, input().split())
Card = list(map(int, input().split()))

for i in Card :
    if i > M : Card.pop(i)

Card.sort(reverse=True)

def PICK (card) :
    Max = 0
    for i in range(0, len(card)-2) :
        for j in range(i+1, len(card)-1) :
            for k in range(j+1, len(card)) :
                Pick = [card[i], card[j], card[k]]
                if sum(Pick) <= M :
                    if sum(Pick) > Max : Max = sum(Pick)
    return Max
                
print(PICK(Card))