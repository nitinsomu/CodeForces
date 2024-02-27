t = int(input())
for i in range(t):
    n = input()
    lis = list(map(int, input().split()))
    sum = 0
    for i in lis:
        if(i<0):
            sum += -i
        else:
            sum += i
    print(sum)