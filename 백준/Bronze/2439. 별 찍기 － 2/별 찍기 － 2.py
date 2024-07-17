N = int(input())

for i in range (1, N+1):
    S = N - i #공백 갯수
    print(" " * S, end="")
    print("*" * i)