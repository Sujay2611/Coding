t=int(input())
for _ in range(t):
    a=[]
    b=[]
    c=[]
    t=0
    n=int(input())
    for z in range(n):
        x,y,z=[int(x) for x in input().split()]
        if(x==1 or y==z):
            t+=1
            a.append(x)
            b.append(y)
            c.append(z)
            print("YES")
        elif(t>0 and (b[len(b)-1]>min(y,z) or c[len(c)-1]>min(y,z))):
            if(b[len(b)-1]>min(y,z)):
                t+=1
                a.append(x)
                b.append(max(y,z))
                c.append(min(y,z))
                print("YES")
            elif(c[len(b)-1]>min(y,z)):
                t+=1
                a.append(x)
                b.append(min(y,z))
                c.append(max(y,z))
                print("YES")
        else:
            print("NO")
