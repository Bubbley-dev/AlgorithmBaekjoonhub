H, M = map(int, input().split()) #현재시각
T = int(input()) #필요한 시간(분)

# 현재 시각에 필요한 시간 더하기
M += T

while M < 0 or M >= 60 :
    if M < 0 :
        M += 60
        H -= 1
    
    if M >= 60 :
        M -= 60
        H += 1
     
while H < 0 or H > 23 :
    if H < 0 : H += 24
    if H > 23 : H -= 24

print(H, M)