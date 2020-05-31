t=int(input())
for _ in range(t):
    n=int(input())
    a=[int(x) for x in input().split()]
    b=[int(x) for x in input().split()]
    c=0
    d=0
    p=0
    for i in range(n):
        if(c==d and a[i]==b[i]):
            p+=a[i]
        c+=a[i]
        d+=b[i]
    print(p)
