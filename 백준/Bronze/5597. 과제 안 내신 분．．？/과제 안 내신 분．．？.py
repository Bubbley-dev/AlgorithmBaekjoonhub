# 30명 list
Student = [0] * 31
for i in range (1, 31) :
    Student[i] = i

# 제출한 사람 0 처리
for i in range (0, 28) :
    a = int(input())
    Student[a] = 0

# 제출 안한 사람 = 0이 아님
for i in Student :
    if i != 0 : print(i)