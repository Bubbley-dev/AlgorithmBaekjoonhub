while True :
    Line = list(map(int, input().split()))

    Line.sort()

    if Line == [0, 0, 0] : break

    if (Line[0]**2) + (Line[1]**2) == (Line[2]**2) : print("right")
    else : print("wrong")