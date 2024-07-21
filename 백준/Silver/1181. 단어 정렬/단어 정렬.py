T = int(input())
words_list = [[] for _ in range(50)] # 단어의 길이별로 모아서 오름차순 정리
for test_case in range(T):
    word = input()
    word_length = len(word)
    if word not in words_list[word_length-1]:
        words_list[word_length-1].append(word)

for words in words_list:
    words.sort()
    for i in range(len(words)):
        print(words[i])