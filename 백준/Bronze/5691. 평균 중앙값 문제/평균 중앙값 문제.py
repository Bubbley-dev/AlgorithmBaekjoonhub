while True :
    A, B = map(int, input().split())
    if A == 0 and B == 0 : break

    number = [A, B]
    number.sort() # 오름차순 정렬, A<=B

    result = []

    # A가 중앙값인 경우
    result.append(A-(B-A))

    # B가 중앙값인 경우
    result.append(B+(B-A))

    # C가 중앙값인 경우
    result.append(int((A+B)/2))

    print(min(result))