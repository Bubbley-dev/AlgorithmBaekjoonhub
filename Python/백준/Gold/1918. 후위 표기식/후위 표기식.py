cal = input()

stk = [" "] * len(cal)
top = -1
postfix = ""

icp = {
    "+":1,
    "-":1,
    "*":2,
    "/":2
}
ocp = {
    "+":1,
    "-":1,
    "*":2,
    "/":2
}

for token in cal:
    if token not in "(+-*/)":
        postfix += token
    elif token == "(":
        top += 1
        stk[top] = token
    elif token == ")":
        while stk[top] != "(":
            postfix += stk[top]
            top -= 1
        top -= 1
    else:
        while top > -1 and stk[top] != "(" and icp[stk[top]] >= ocp[token]:
            postfix += stk[top]
            top -= 1
        top += 1
        stk[top] = token

while top > -1:
    postfix += stk[top]
    top -= 1

print(postfix)

