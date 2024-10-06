from collections import deque

dt = [(0, 1), (1, 0), (0, -1), (-1, 0)]

def is_valid(x, y):
    return 0 <= x < 16 and 0 <= y < 16

for __ in range(1, 11):
    tc = int(input())
    maze = [input() for _ in range(16)]
    result = 0

    # 가능 1 불가능 0
    # 출발점 2 (1, 1)

    # 0이면 가도 되고, 1이면 못 가고, 3이면 도착 (종료)

    visit = [[0]*16 for _ in range(16)]
    q = deque()
    q.append((1, 1))
    visit[1][1] = 1
    while q:
        r, c = q.popleft()
        if maze[r][c] == '3':
            result = 1
            break
        for dr, dc in dt:
            nr, nc = r+dr, c+dc
            if is_valid(nr, nc) and maze[nr][nc] != '1' and not visit[nr][nc]:
                q.append((nr, nc))
                visit[nr][nc] = 1

    print(f"#{tc} {result}")