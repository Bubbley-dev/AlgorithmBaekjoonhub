Side = ["E", "S", "W", "N"]

Result = 3 # 북쪽에서 시작

for i in range(10) :
    Com = input()
    if Com == "1" : Result += 1
    elif Com == "2" : Result += 2
    elif Com == "3" : Result -= 1

    if Result>3 : Result-=4
    elif Result<0 : Result+=4

print(Side[Result])