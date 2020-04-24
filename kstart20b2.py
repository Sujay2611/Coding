t=int(input())
for z in range(1,t+1):
    n,d=[int(y) for y in input().split()]
    x=[int(y) for y in input().split()]
    p=n-1
    while(p>-1):
        d=d-(d%x[p])
        p=p-1
    print("Case #"+str(z)+": "+str(d))