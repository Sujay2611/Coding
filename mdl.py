t=int(input())
for _ in range(t):
    n=int(input())
    a=[int(x) for x in input().split()]
    x=max(a)
    y=min(a)
    if(a.index(x)>a.index(y)):
        print(y,x)
    else:
        print(x,y)
