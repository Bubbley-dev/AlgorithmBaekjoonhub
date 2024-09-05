def match(n, rev):
    global result
    if rev == 0:
        # 벡터합 구하기
        x = y = 0
        for i in range(N):
            x += arr[i][0]
            y += arr[i][1]

        v = x*x + y*y
        if result > v:
            result = v

        return

    if n == N:
        return

    # n번 지렁이 뒤집을까 말까
    # 뒤집으면
    arr[n][0] *= -1
    arr[n][1] *= -1
    match(n+1, rev-1)

    # 안 뒤집으면
    arr[n][0] *= -1
    arr[n][1] *= -1
    match(n+1, rev)

T = int(input())
for tc in range(1, T+1):
    # print(f"#{tc}")
    N = int(input())
    arr = [list(map(int, input().split())) for _ in range(N)]


    result = 999999999**2

    match(0, N//2)

    print(f"#{tc} {result}")
