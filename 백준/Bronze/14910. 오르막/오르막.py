arr = list(map(int, input().split()))

arr_sort = arr.copy()
arr_sort.sort()

if arr == arr_sort : print("Good")
else : print("Bad")