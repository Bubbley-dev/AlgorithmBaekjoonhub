from collections import deque

N, K = map(int, input().split())
# N 수빈이가 있는 위치
# K 동생이 있는 위치

time = [0] * 100001
# BFS로 접근?
queue = deque()
time[N] = 1
queue.append(N)
result = 0
while queue:
    now = queue.popleft()
    if now == K:
        result = time[now] - 1
        break

    if 0 <= now-1 < 100001 and not time[now-1]:
        queue.append(now-1)
        time[now-1] = time[now] + 1
    if 0 <= now+1 < 100001 and not time[now+1]:
        queue.append(now+1)
        time[now+1] = time[now] + 1
    if 0 <= now*2 < 100001 and not time[now*2]:
        queue.append(now*2)
        time[now*2] = time[now] + 1


print(result)