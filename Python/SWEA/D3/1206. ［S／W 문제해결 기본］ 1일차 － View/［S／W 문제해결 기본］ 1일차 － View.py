for testcase in range(1, 11):
    N = int(input())
    arr = list(map(int, input().split()))

    nice_view = 0

    for i in range(2, N - 2):  # i는 빌딩 번호
        for j in range(arr[i]+1):  # j는 i번 건물의 j층
            # j 층이 조망권인가? 어떻게 판단?
            if arr[i - 1] < j and arr[i + 1] < j and arr[i - 2] < j and arr[i + 2] < j:
                nice_view += 1

    print(f'#{testcase} {nice_view}')