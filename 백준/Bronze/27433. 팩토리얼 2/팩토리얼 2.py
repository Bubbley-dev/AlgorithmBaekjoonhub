def fact (num):

    if num == 0:

        return 1

    else:

        return num * fact(num-1)

    

print(fact(int(input())))