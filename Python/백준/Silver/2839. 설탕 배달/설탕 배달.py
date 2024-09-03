N = int(input())
arr = [0] * (N+10)  # arr[i] == i kg을 만들 수 있는 최소의 경우
arr[3] = 1
arr[5] = 1
arr[6] = 2
arr[8] = 2
arr[9] = 3

for i in range(3, N+1):
    if i == 4 or i == 7:
        continue
    if not arr[i]:
        if not (i-2)%5:
            arr[i] = arr[i-3] + 1
        else:
            arr[i] = arr[i-2]


result = arr[N] if arr[N] else -1
print(result)