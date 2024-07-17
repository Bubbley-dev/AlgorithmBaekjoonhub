Temp = int(input()) #원래 고기 온도
B = int(input()) #목표 온도
C = int(input()) #얼어있는 고기를 1도를 데우는 데 걸리는 시간
D = int(input()) #해동하는 데 걸리는 시간
E = int(input()) #얼어있지 않은 고기를 1도 데우는 데 걸리는 시간

if Temp < 0 : Status = "frozen"
else : Status = "unfrozen"

Time = 0

while Temp < B :
    if Temp < 0 : Time += C ; Temp += 1
    elif Status == "frozen" and Temp == 0 : Time += D ; Status = "unfrozen"
    elif Status == "unfrozen" : Time += E ; Temp += 1

print(Time)