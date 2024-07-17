A = input()
B = input()
C = input()
if "Fizz" not in A :
    if "Buzz" not in A :
        D = int(A) + 3
if "Fizz" not in B :
    if "Buzz" not in B :
        D = int(B) + 2
if "Fizz" not in C :
    if "Buzz" not in C :
        D = int(C) + 1

if D%3 == 0 and D%5 == 0 : print("FizzBuzz")
elif D%3 == 0 : print("Fizz")
elif D%5 == 0 : print("Buzz")
else : print(D)
