def cinema(t):
    one = 0
    two = 0
    li = list(map(int, input().split()))
    for i in li:
        if(i == 25):
            one += 1
        elif(i == 50):
            if(one<1):
                return 0
            else:
                one -= 1
            two += 1
        else:
            if((one>0 and two>0) or one>2):
                if((one>0 and two>0)):
                    one -= 1
                    two -= 1
                else:
                    one -= 3
            else:
                return 0
    return 1               
        


t = int(input())
flag = cinema(t)
if(flag):
    print("YES")
else:
    print("NO")