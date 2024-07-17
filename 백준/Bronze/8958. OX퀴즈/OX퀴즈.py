T = int(input()) #(첫번째 줄)테스트 케이스 갯수

for T in range(1, T+1) :
    Input = input()
    Result = [i for i in Input]

    i = 0
    correct = 0
    score = 0

    for i in range (len(Result)) :
        if Result[i] == "X" :
            correct = 0
        elif Result[i] == "O" :
            correct += 1
        
        score += correct

    print(score)