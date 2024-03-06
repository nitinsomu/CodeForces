a, b, n = map(int, input().split())

flag = 0
for i in range(10):
    if((a*10 + i) % b == 0):
        flag = 1
        temp = a*10+i
        break
if(flag == 1):
    temp *= pow(10, n-1)
    print(temp)
else:
    print(-1)