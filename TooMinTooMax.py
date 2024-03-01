def toomintoomax(li):
    mi1, mi2 = li[0], 10000000
    ma1, ma2 = li[0], -10000000
    for i in li[1:]:
        if(i <= mi1):
            temp = mi1
            mi1 = i
            mi2 = temp
        elif(i < mi2):
            mi2 = i
        if(i >= ma1):
            temp = ma1
            ma1 = i
            ma2 = temp
        elif(i > ma2):
            ma2 = i
    print((abs(ma1-mi1)+abs(mi1-ma2)+abs(ma2-mi2)+abs(mi2-ma1)))

def main():
    t = int(input())
    for i in range (t):
        trash = input()
        li = list(map(int, input().split()))
        toomintoomax(li)

if __name__ == "__main__":
    main()