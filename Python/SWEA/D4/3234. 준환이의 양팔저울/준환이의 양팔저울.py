def f(n):
    if n <= 1:
        return 1
    return n*f(n-1)

def weight(n, left, right):
    global cnt
    # n번째 추를 올릴거고, 각각 왼쪽, 오른쪽의 현재 무게이다.
    if left < right:
        return

    # 남은 추를 오른쪽에 다 올려도 될 것 같으면 굳이 하나하나 안보고 경우의수만 더해주자
    if left > maxi-left:
        # 남은 추의 수 = N-n
        case = f(N-n) * (2**(N-n))
        cnt += case
        return

    if n == N:
        cnt += 1
        # print(left, right, cnt)
        return

    for i in range(N):
        if not selected[i]:
            # i번 추를 올릴거다.
            selected[i] = 1
            w = arr[i]

            # 남은 추에 오른쪽에 올릴 수 있는 게 없으면 다 왼쪽에 올리는 경우를 곱해주면 될 것 같다?

            # 오른쪽에 올리는 경우
            weight(n+1, left, right+w)

            # 왼쪽에 올리는 경우
            weight(n+1, left+w, right)

            selected[i] = 0

T = int(input())
# for tc in range(1, 3):
for tc in range(1, T+1):
    N = int(input())
    arr = list(map(int, input().split()))
    # arr.sort(reverse=True)
    maxi = sum(arr)

    cnt = 0
    selected = [0] * N

    weight(0, 0, 0)

    print(f"#{tc} {cnt}")