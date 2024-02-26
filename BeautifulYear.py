z = int(input())
while(True):
    z+=1
    n = z
    a = n%10
    n = int(n/10)
    b = n%10
    n = int(n/10)
    c = n%10
    n = int(n/10)
    d = n%10
    if(a!=b and a!=c and a!=d and b!=c and b!=d and c!=d):
        print(z)
        break
