t = int(input())
flag = 0
sum1 = 0
sum2 = 0
for i in range(t):
    a, b = map(int, input().split())
    sum1 += a
    sum2 += b
    if((a%2 == 1 and b%2 == 0) or (a%2 == 0 and b%2 == 1)):
        flag = 1
if(sum1%2 == 0 and sum2%2 == 0):
    print(0)
elif(t>1 and (sum1%2 == 1 and sum2%2 == 1)):
    if(flag == 1):
        print(1)
    else:
        print(-1)
else:
    print(-1)

