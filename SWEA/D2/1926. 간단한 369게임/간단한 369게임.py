T = int(input())

numbers = [str(i) for i in range(1, T+1)]

clap = 0

for i in range(len(numbers)):
    number = numbers[i]
    if '3' in number or '6' in number or '9' in number:
        clap += number.count('3')
        clap += number.count('6')
        clap += number.count('9')
        numbers[i] = '-' * clap
        clap = 0

print(" ".join(numbers))