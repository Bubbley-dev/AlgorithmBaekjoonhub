S=input()

#소문자 알파벳 갯수 리스트 작성
a = list()
for i in range(ord('a'), ord('z')+1):
    a.append(S.count(chr(i)))

#대문자 알파벳 갯수 리스트 작성
A = list()
for i in range(ord('A'), ord('Z')+1):
    A.append(S.count(chr(i)))

#갯수 합친 최종 리스트 작성
sum = list()
for i in range(0, len(a)) :
    j = a[i] + A[i]
    sum.append(j)

#가장 많은게 몇개인가
Max = max(sum)

#가장 많은 갯수를 가진 알파벳이 한개인가?
number = sum.count(Max)

#1개면 알파벳을, 2개 이상이면 ? 출력
if number==1 : print(chr((sum.index(Max))+65))
else : print("?")