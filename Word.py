str = input()
lowercount = 0
for i in str:
    if(i.islower()):
        lowercount+=1

if(lowercount < len(str)/2):
    print(str.upper())
else:
    print(str.lower())
