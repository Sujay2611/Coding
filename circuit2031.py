t=int(input())
for _ in range(t):
    n=int(input())
    a=[int(x) for x in input().split()]
    a.sort()
    b=[i for i in a if(i%2)]
    c=[i for i in a if(i%2==0)]
    if(len(b)>0 and len(c)>0):
        d=[]
        e=b[0]
        f=c[0]
        for i in range(n-1):
            d.append((a[i] and a[i+1])^(a[i] or a[i+1]))
        for i in range(len(b)-1):
            d.append((b[i] and b[i+1])^(b[i] or b[i+1]))
        for i in range(len(c)-1):
            d.append((c[i] and c[i+1])^(c[i] or c[i+1]))
        for i in range(len(b)):
            d.append((b[i] and f)^(b[i] or f))
        for i in range(len(c)):
            d.append((c[i] and e)^(c[i] or e))
        #print(d)
        print(min(d))
    elif(len(b)==0):
        d=[]
        for i in range(n-1):
            d.append((a[i] and a[i+1])^(a[i] or a[i+1]))
        for i in range(len(c)-1):
            d.append((c[i] and c[i+1])^(c[i] or c[i+1]))
        print(min(d))
    else:
        d=[]
        for i in range(n-1):
            d.append((a[i] and a[i+1])^(a[i] or a[i+1]))
        for i in range(len(b)-1):
            d.append((b[i] and b[i+1])^(b[i] or b[i+1]))
        print(min(d))