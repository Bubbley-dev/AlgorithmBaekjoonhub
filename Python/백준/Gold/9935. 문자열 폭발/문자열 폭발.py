s = input()
bomb = input()

temp = reversed(list(s))
stack = []

for char in temp:
    if len(stack) < len(bomb)-1 or char != bomb[0]:
        stack.append(char)
    else:
        ns = [char]
        for i in range(1, len(bomb)):
            ns.append(stack.pop())
        
        if ns == list(bomb):
            continue
        else:
            stack += reversed(ns)


if len(stack) == 0:
    print("FRULA")
else:
    print("".join(reversed(stack)))
