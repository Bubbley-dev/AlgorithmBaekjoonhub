T = int(input())

Room = []

i = 1

while i <= 1000000000 :
    A = 6*len(Room) # 그 줄에 포함된 방의 갯수
    i += A
    Room.append(i) # 그 줄의 마지막 방 번호
    
Room.append(1000000000)

for i in range(len(Room)) :
    if T > Room[i] : continue
    else : print(i+1) ; break