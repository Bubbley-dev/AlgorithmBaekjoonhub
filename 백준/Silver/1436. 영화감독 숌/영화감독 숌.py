N = int(input())

# 666이 들어간 숫자 10000개 리스트를 만들고 오름차순 정렬

Apo = []

number = 666

while len(Apo) < N:
    if '666' in str(number):
        Apo.append(number)
    
    number += 1

Apo.sort()

print(Apo[-1])