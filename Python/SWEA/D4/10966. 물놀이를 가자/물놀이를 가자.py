# 물놀이를 가자
from collections import deque

delta = [(1, 0), (0, 1), (-1, 0), (0, -1)]

def isvalid(x, y):
    return 0<=x<N and 0<=y<M

T = int(input())
for tc in range(1, T+1):
    N, M = map(int, input().split())
    arr = [list(input()) for _ in range(N)]

    total = 0

    # 물의 위치(거리0)을 표시하기 위해 기본을 -1로 처리
    dist = [[-1]*M for _ in range(N)]
    q = deque()

    # 물로부터 거리를 재는 게 맞다!
    for r in range(N):
        for c in range(M):
            if arr[r][c] == "W":
                q.append((r, c))
                dist[r][c] = 0  # dist가 0이면 물!

    while q:
        r, c = q.popleft()

        for (dr, dc) in delta:
            nr, nc = r+dr, c+dc
            if isvalid(nr, nc) and dist[nr][nc] == -1:
                q.append((nr, nc))
                dist[nr][nc] = dist[r][c] + 1
                total += dist[nr][nc]

    print(f"#{tc} {total}")