input()
a = list(map(int, input().split()))
n = len(a)
input()
b = list(map(int, input().split()))
m = len(b)
ans = 0
maxratio = 0
for i in range (m):
    for j in range(n):
        if(b[i]%a[j] != 0):
            continue
        ratio = b[i]/a[j]
        if(ratio > maxratio):
            maxratio = ratio
            ans = 1
        elif(ratio == maxratio):
            ans += 1
print(ans)
