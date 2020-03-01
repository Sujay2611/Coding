t=int(input())
for _ in range(t):
    n,m=[int(x) for x in input().split()]
    a=[int(x) for x in input().split()]
    k=max(a)
    l=[1001]
    for i in range(1,max(a)+1):
        if(i in a):
            l.append(0)
        else:
            l.append(1001)
    p=0
    for j in a:
        if(l[j]<=min(l)):
            l[j]+=1
        else:
            p=1
    if(p==1):
        print("NO")
    else:
        print("YES")
