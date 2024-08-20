L = int(input())  # 롤케이크의 길이
N = int(input())  # 방청객 수
wanted = [0] + [list(map(int, input().split())) for _ in range(N)]

expected = [0] * (N+1)  # i번 방청객이 받고싶어하는 롤케이크 수
cnt = [0] * (N+1)  # i번 방청객이 실제로 받는 롤케이크 수

shared = [0] * (L+1)  # i번 조각을 받는 방청객의 번호

for i in range(1, N+1):
    # i번 방청객
    P, K = wanted[i]  # P부터 K번 조각을 받고 싶어함
    expected[i] = K-P+1
    for j in range(P, K+1):
        if not shared[j]:  # j번 조각을 나눠준 적이 없다면
            shared[j] = i   # i번째 방청객이 가져가게 됨
            cnt[i] += 1  # i번째 방청객이 받은 갯수 증가

# 여러 명이라면 숫자가 작은 사람을 출력하기 때문에, index 메서드 사용 가능
# 가장 많은 조각을 받을 것 같았던 참가자
print(expected.index(max(expected)))
# 실제로 가장 많이 받은 참가자
print(cnt.index(max(cnt)))