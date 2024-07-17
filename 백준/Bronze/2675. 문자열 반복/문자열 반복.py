T = int(input()) #(첫번째 줄)테스트 케이스 갯수

for T in range(1, T+1) :
    R, S = map(str, input().split()) # S 문자열을 R번 반복해야함
    R = int(R)                       # R을 정수화
    for i in S :
        print(i * R, end="")
    print()