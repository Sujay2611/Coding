import math
t=int(input())
for _ in range(t):
    n=input()
    l=list(n)
    x=l.count('0')
    y=len(l)
    i=y-1
    while(l[i]=='0'):
        i=i-1
    m=l[:i+1]    
    p="".join(m)    
    k=int(p)
    
    
    m=math.log2(k)
    
    if(math.ceil(m)==math.floor(m)):
        if(y-i-1>=int(m)):
            print('Yes')
        else:
            print('No')
    else:
        print('No')
