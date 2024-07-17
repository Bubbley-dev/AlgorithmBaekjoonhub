Melody = list(map(int, input().split()))

ascending, descending, mixed = True, True, True

i = 0 #index
num = 1 #melody

while i<8 :
    if Melody[i] != num :
        ascending = False
        break
    else : i += 1 ; num += 1

if ascending == True : print("ascending")

i = 0 #index

for i in range (8) :
   if Melody[i]+i != 8 :
       descending = False
       break

if descending == True : print("descending")
elif descending == False and ascending == False : print("mixed")