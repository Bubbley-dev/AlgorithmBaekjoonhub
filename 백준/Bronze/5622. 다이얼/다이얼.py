S = input()
N = list()

sec = 0

for i in S :
    if ord(i) in range(ord('A'),ord('C')+1) : N.append(2); continue
    elif ord(i) in range(ord('D'),ord('F')+1) : N.append(3); continue
    elif ord(i) in range(ord('G'),ord('I')+1) : N.append(4); continue
    elif ord(i) in range(ord('J'),ord('L')+1) : N.append(5); continue
    elif ord(i) in range(ord('M'),ord('O')+1) : N.append(6); continue
    elif ord(i) in range(ord('P'),ord('S')+1) : N.append(7); continue
    elif ord(i) in range(ord('T'),ord('V')+1) : N.append(8); continue
    elif ord(i) in range(ord('W'),ord('Z')+1) : N.append(9); continue

for i in N :
    sec += 1 + i

print(sec)