n = input()
li = list(input())
count = 0
for i, x in enumerate(li[:-1]):
    if(x == li[i+1]):
        count+=1

print(count)