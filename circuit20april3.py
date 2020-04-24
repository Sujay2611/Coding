t=int(input())
for _ in range(t):
    n=int(input())
    a=input()
    if(a.count('A')==0 or a.count('B')==0):
        print(0)
    elif(a.count('B')==1 and a[-1]=='B'):
        print(0)
    else:
        p=a.count('A')
        q=a.count('B')
        m=n
        x=0
        y=0
        for i in a:
            if(i=='A'):
                x+=1
            else:
                if((y+p-x)<m):
                    m=y+p-x
                y+=1
        if(a[-1]=='B'):
            print(min(p,q-1,m))
        else:
            print(min(p,q,m))