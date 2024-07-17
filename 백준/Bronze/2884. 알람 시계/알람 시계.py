H, M = map(int, input().split())

# 주어진 시간에 45분 빼기
M -= 45

if M < 0 :
    M += 60
    H -= 1
    if H < 0 : H += 24

print(H, M)