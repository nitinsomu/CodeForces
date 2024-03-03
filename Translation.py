str = input()
str1 = input()
flag = 1
if(len(str) != len(str1)):
    flag = 0
else:
    n = len(str)
    for i in range(0, n):
        if(str[i] != str1[n-1-i]):
            flag = 0
            break
if(flag):
    print("YES")
else:
    print("NO")