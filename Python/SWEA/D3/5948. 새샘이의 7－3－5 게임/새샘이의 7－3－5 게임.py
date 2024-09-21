def recur(i, visit, ncnt, nsum):
    if ncnt == 3:
        results.add(nsum)
        return

    if i > 5:
        return

    for j in range(i+1, 7):
        if not visit[j]:
            visit[j] = 1
            recur(j, visit, ncnt+1, nsum+numbers[j])
            visit[j] = 0



T = int(input())

for tc in range(1, T+1):
    numbers = list(map(int, input().split()))

    v = [0] * 7
    results = set()

    for i in range(7):
        v[i] = 1
        recur(i, v, 1, numbers[i])
        v[i] = 0

    result = sorted(list(results), reverse=True)[4]

    print(f"#{tc} {result}")
