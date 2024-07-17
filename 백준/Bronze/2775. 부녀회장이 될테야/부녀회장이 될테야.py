T = int(input())  # (첫번째 줄)테스트 케이스 갯수
for T in range(1, T+1):
    floor = int(input())
    room = int(input())

    
    apt = [[0 for j in range(room+1)] for i in range(floor+1)] # 아파트 [n][m] == n층 m호
    apt[0] = [i for i in range(room+1)] # 0층은 room 번호 = 사람수

    for f in range(1, floor+1) : # 1층부터 floor층까지 탐색
        for r in range(1, room+1) : # 1호부터 room호까지 탐색
            apt[f][r] = sum(apt[f-1][:r+1]) # f층 r호에는 f-1층의 0호(0명)부터 r호까지 사람의 합이 살고 있다
    
    print(apt[floor][room]) #floor층 room호에 사는 사람은 몇명?