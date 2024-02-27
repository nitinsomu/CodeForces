t = int(input())
for i in range(t):
    n = input()
    li = list(map(int, input().split()))
    sum = 0
    flag = 0
    for i in li:
        sum += i
        if(i%3 == 1):
            flag = 1
    if(sum % 3 == 0):
        print("0")
    elif(sum % 3 == 2):
        print("1")
    else:
        if(flag == 1):
            print("1")
        else:
            print("2")
