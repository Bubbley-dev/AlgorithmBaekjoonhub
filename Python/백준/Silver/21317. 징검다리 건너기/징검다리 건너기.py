def fillDP(n):
    # n번째 DP값 반환하는 함수 (big == 매우 큰 점프 유무)
    if n == 0:
        DP[n] = [0, 0]
        return

    if n-1 >= 0: 
        if DP[n-1][0] == -1:
            fillDP(n-1)
        DP[n] = [DP[n-1][0]+E[n-1][0], DP[n-1][0]+E[n-1][0]]
    if n-2 >= 0: 
        if DP[n-2][0] == -1:
            fillDP(n-2)
        DP[n][0] = min(DP[n-1][0]+E[n-1][0], DP[n-2][0]+E[n-2][1])
        DP[n][1] = min(DP[n-1][1]+E[n-1][0], DP[n-2][1]+E[n-2][1])
    if n-3 >= 0: 
        if DP[n-3][1] == -1:
            fillDP(n-3)
        DP[n][1] = min(DP[n-1][1]+E[n-1][0], DP[n-2][1]+E[n-2][1], DP[n-3][0] + K)


N = int(input())  # 돌의 갯수
E = [list(map(int, input().split())) for _ in range(N-1)]  # [0] 작은 점프 [1] 큰 점프
K = int(input())  # 매우 큰 점프

DP = [[-1, -1] for _ in range(N)]

fillDP(N-1)

print(min(DP[N-1]))
