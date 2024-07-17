T = int(input()) #(첫번째 줄)테스트 케이스 갯수

for T in range(1, T+1) :
    
    A, B = map(int, input().split())
    print("Case #%d:" % T, A + B)