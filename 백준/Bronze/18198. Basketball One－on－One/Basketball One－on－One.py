Score = input()
A = 0
B = 0

Winner = ""

while len(Score) > 0 :
    if Score[0] == "A" :
        A += int(Score[1])
    elif Score[0] == "B" :
        B += int(Score[1])

    Score = Score[2:]

if A>B : print("A")
elif B>A : print("B")