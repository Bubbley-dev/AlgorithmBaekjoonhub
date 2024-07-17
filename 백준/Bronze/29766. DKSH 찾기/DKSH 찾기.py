DKSH = input()

Result = 0

F = DKSH.find("DKSH")

while F != -1 :
    Result += 1
    
    DKSH = DKSH[DKSH.index("DKSH")+4:]

    F = DKSH.find("DKSH")

print(Result)