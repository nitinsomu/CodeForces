input()
li = list(map(int, input().split()))
mi = 0
ma = 0
n = len(li)
for i in range (1,n):
    if(li[i]>li[ma]):
        ma = i
    if(li[i]<=li[mi]):
        mi = i
if(ma>mi):
    print(ma + n - mi - 2)
else:
    print(ma + n - mi - 1)