T = int(input())
for tc in range(1, T+1):
    N, K = map(int, input().split())

    treasure = input()  # str, 0회전한 경우
    length = N//4  # 문자의 길이

    saw = set()
    hexa = set()
    numbers = set()

    rotation = treasure
    while True:
        # 문자열 중복체크
        if rotation in saw:
            break
        saw.add(rotation)

        # 16진수 자르기
        # 중복체크 후 10진수 변환, 집합에 추가
        for i in range(0, N, length):
            h = rotation[i:i+length]
            if h not in hexa:
                hexa.add(h)
                numbers.add(int(h, 16))

        # 보물상자 돌리기
        rotation = rotation[N-1]+rotation[:N-1]

    prob = sorted(list(numbers), reverse=True)

    print(f"#{tc} {prob[K-1]}")