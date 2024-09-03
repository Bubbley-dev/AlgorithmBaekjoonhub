def recur(s):
    # s 시작점
    for e in range(1, N+1):
        if arr[s][e] and not visited[e]:  # s가 e를 알고 있고, e를 체크한 적 없으면
            visited[e] = 1  # e 체크하고
            recur(e)  # e가 알고있는 사람에게 간다.
    else:  # s가 알고있는 사람을 모두 방문했으면
        return 1



T = int(input())
for tc in range(1, T+1):
    N, M = map(int, input().split())
    # 사람 N명
    # 관계배열
    arr = [[0] * (N+1) for _ in range(N+1)]

    for _ in range(M):
        a, b = map(int, input().split())
        # 양방향 관계
        arr[a][b] = 1
        arr[b][a] = 1

    # 무리의 수 (출력)
    cnt = 0

    visited = [0] * (N+1)  # 방문 배열

    for i in range(1, N+1):
        if not visited[i]:
            visited[i] = 1
            cnt += recur(i)

    print(f"#{tc} {cnt}")