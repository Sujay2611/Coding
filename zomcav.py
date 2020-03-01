def mx(x,y):
    if(x>y):
        return x
    else:
        return y
        
        
def mn(x,y):
    if(x<y):
        return x
    else:
        return y


t=int(input())
for _ in range(t):
    n=int(input())
    a=[int(x) for x in input().split()]
    b=[int(x) for x in input().split()]
    c=sum(b)
    d=0
    for i in range(n):
        d=d+abs(mx(i-a[i],0)-mn(i+a[i]+1,n))
    
    if(c==d):
        print('YES')
    else:
        print('NO')
