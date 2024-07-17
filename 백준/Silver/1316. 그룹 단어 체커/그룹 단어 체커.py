T = int(input()) #(첫번째 줄)테스트 케이스 갯수

group = 0
word = list()
alphabet = set()

for i in range(1, T+1) :
    S = input()
    for j in S :
        word.append(j)  #단어를 리스트로 만들어
    
    group += 1 #일단 그룹문자가 맞다고 가정해

    j = 0
    while j < len(word):
        if word[j] not in alphabet : 
            alphabet.add(word[j])
            j += 1  #처음 나온 알파벳이면 일단 리스트에 추가해
        else :
            if word[j-1] == word[j] : j += 1 #처음나온게 아닌데 앞에거랑 같으면 다음거 확인해
            else : group -= 1 ; break #처음 나온것도 아닌데 앞에꺼랑 다르면 이건 그룹문자가 아니야
            #break 걸었을때 while문만 빠져나가겠지?
        
    #다음 테스트를 위해 모두 다시 초기화해
    word = list()
    alphabet = set()

#모든 케이스를 다 확인하고 그룹문자의 갯수를 출력해
print(group)