N = int(input()) #시험 본 과목 개수
Score = list(map(int, input().split())) #점수 리스트

Sum = 0 #새로운 점수 합계 초기화

M=max(Score)

for i in Score :
    Sum += i/M*100

print(Sum/N)