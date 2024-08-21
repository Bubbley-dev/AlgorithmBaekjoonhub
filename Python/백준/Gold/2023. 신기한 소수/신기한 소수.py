N = int(input())

prime = [2, 3, 5, 7, 11]


def isprime(num):
    if num in prime:
        return True
    for i in range(2, num // 2 + 1):
        if not num % i:
            return False
    prime.append(num)
    return True


def amazingprime(num, numlen=1):
    if numlen == N:
        if isprime(num):
            print(num)
        return

    for i in range(1, 10, 2):  # 어차피 1의자리 0은 10의배수, 짝수 건너뜀
        if isprime(num * 10 + i):
            amazingprime(num * 10 + i, numlen + 1)


for p in [2, 3, 5, 7]:
    amazingprime(p)
