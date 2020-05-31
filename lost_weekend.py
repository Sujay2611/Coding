t=int(input())
for _ in range(t):
    a=[int(x) for x in input().split()]
    b=a[:5]
    c=a[-1]
    d=sum(b)*c
    if(d>120):
        print('Yes')
    else:
        print('No')
