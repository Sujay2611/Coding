t=int(input())
for u in range(1,t+1):
    n=int(input())
    a=[]
    for i in range(n):
        b=[int(x) for x in input().split()]
        a.append(b)
    z=0
    for i in range(n):
        for j in range(n):
            if(i==j):
                z+=a[i][j]
    x=0
    for i in a:
        if(len(i)!=len(set(i))):
            x+=1
    y=0
    for j in range(n):
        p=[a[i][j] for i in range(n)]
        if(len(p)!=len(set(p))):
            y+=1
    print("Case #"+str(u)+":"+" "+str(z)+" "+str(x)+" "+str(y))