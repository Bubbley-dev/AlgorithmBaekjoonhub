T = int(input())  # test_case의 수

for test_case in range(1, T+1):
    days = int(input())  # 매매가를 알고있는 날의 수
    costs = list(map(int, input().split()))  # index+1 일차의 가격

    # # 구입일자부터 마지막날까지 가격차이 탐색, 가장 높은 가격 이익에 합산(음수일 경우 0)
    # benefit = 0
    # for i in range(day):
    #     benefit += max(costs[i:]) - costs[i]
        
    benefit = 0
    # 가장 비싼 날 이전까지 모두 구입 후 비싼 날 판매
    while len(costs) > 0 :
        maximum_days = costs[:costs.index(max(costs))]
        benefit += (max(costs)*len(maximum_days)) - sum(maximum_days)
        costs = costs[costs.index(max(costs))+1:]

    print(f"#{test_case} {benefit}")