t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    c=[]
    for i in range(n):
        c.append(20*a[i]-10*b[i])
    for j in range(len(c)):
        if(c[j]<0):
            c[j]=0
    print(max(c))
