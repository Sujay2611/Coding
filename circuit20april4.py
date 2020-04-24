t=int(input())
for _ in range(t):
    a,b,c=[x for x in input().split()]
    z=int(a)
    y=bin(z).replace("0b", "")
    x=list(y)
    while(len(x)<16):
        x.insert(0,'0')
    p=[0 for i in range(16)]
    d=int(b)
    if(c=='L'):
        p=x[d:]+x[:d]
    else:
        p=x[16-d:]+x[:16-d]
 
    r="".join(p)
    t=int(r,2)
    print(t)
