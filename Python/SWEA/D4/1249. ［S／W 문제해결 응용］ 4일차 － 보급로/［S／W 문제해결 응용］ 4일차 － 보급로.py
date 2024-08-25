from collections import deque

def isvalid(i, j):
    return 0 <= i < N and 0 <= j < N

T = int(input())
for tc in range(1, T+1):
    N = int(input())
    arr = [list(map(int, input())) for _ in range(N)]

    time = [[(N**2)*9] * N for _ in range(N)]
    time[0][0] = 0

    q = deque()

    q.append((0,0))

    #출발지 0,0 도착지 n-1, n-1
    while q:
        r, c = q.popleft()

        for dr, dc in [(1, 0), (0, 1), (-1, 0), (0, -1)]:
            nr, nc = r+dr, c+dc
            if isvalid(nr, nc) and time[nr][nc] and time[nr][nc] > arr[nr][nc] + time[r][c]:
                time[nr][nc] = arr[nr][nc] + time[r][c]
                q.append((nr, nc))


    print(f"#{tc} {time[N-1][N-1]}")
