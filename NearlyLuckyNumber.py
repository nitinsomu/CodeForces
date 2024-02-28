n = int(input())
count = 0
while n:
    temp = n%10
    if temp == 4 or temp == 7:
        count+=1
    n //= 10
flag = 1
if(not count):
    print("NO")
else:
    while count:
        temp = count%10
        if temp!=4 and temp!=7:
            flag = 0
        count //= 10

    if flag:
        print("YES")
    else:
        print("NO")



