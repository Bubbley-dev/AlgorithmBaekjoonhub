a, b, c = map(int, input().split())

dice = [a, b, c]

same = 0

reward = 0

if a==b==c :            # 3개 모두 같은 경우

    reward += 10000
    reward += a * 1000

elif a==b or a==c :      # a가 같은 경우
    reward += 1000
    reward += a * 100
elif b==c :                           # a만 다를 경우
    reward += 1000
    reward += b * 100
else :                                # 값이 다 다를 경우
    reward += max(dice) * 100

print(reward)