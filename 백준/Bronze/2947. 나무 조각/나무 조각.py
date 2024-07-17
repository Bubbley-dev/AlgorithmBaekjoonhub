Wood = list(map(int, input().split()))

while Wood != [1, 2, 3, 4, 5] :
    if Wood[0]>Wood[1] : Wood[0], Wood[1] = Wood[1], Wood[0] ; print(Wood[0],Wood[1],Wood[2],Wood[3],Wood[4])
    if Wood[1]>Wood[2] : Wood[1], Wood[2] = Wood[2], Wood[1] ; print(Wood[0],Wood[1],Wood[2],Wood[3],Wood[4])
    if Wood[2]>Wood[3] : Wood[2], Wood[3] = Wood[3], Wood[2] ; print(Wood[0],Wood[1],Wood[2],Wood[3],Wood[4])
    if Wood[3]>Wood[4] : Wood[3], Wood[4] = Wood[4], Wood[3] ; print(Wood[0],Wood[1],Wood[2],Wood[3],Wood[4])