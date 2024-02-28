def isPrime(num):
    flag = 1
    for i in range(2,num):
        if(num % i == 0):
            flag = 0
            break    
    return flag

n, m = map(int,input().split())

temp = 0

while(True):
    n += 1
    if(isPrime(n)):
        temp = n
        break
if(temp == m):
    print("YES")
else:
    print("NO")


