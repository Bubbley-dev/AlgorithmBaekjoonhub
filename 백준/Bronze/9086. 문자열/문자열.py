T = int(input()) #(첫번째 줄)테스트 케이스 갯수

for T in range(1, T+1) :
    S = input()
    print("%s%s" % (S[0], S[-1]))