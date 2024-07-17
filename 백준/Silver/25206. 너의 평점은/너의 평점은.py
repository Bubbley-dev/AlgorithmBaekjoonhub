TotalCount = 0
TotalGrade = 0

for i in range (0, 20):
    Name, count, grade = map(str, input().split())
    count = float(count)
    
    if grade == 'A+' : Ngrade = 4.5
    elif grade == 'A0' : Ngrade = 4.0
    elif grade == 'B+' : Ngrade = 3.5
    elif grade == 'B0' : Ngrade = 3.0
    elif grade == 'C+' : Ngrade = 2.5
    elif grade == 'C0' : Ngrade = 2.0
    elif grade == 'D+' : Ngrade = 1.5
    elif grade == 'D0' : Ngrade = 1.0
    elif grade == 'F' : Ngrade = 0.0
    else : continue

    TotalCount += count
    TotalGrade += count * Ngrade

print(TotalGrade/TotalCount)