T = int(input()) #(첫번째 줄)테스트 케이스 갯수

for T in range(1, T+1) :
    H, W, N = map(int, input().split())

    room = [0, 0]

    #층은 N을 H로 나눈 나머지

    room[0] = N%H

    #호수는 N에서 H로 나눈 몫의 정수+1
    room[1] = int(N/H) + 1

    if room[0] == 0 : room[0] = H ; room[1] -= 1

    print("{}{:0>2}".format(room[0], room[1]))