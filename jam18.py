import math
t=int(input())
for h in range(1,t+1):
    a,b=[x for x in input().split()]
    c=int(a)
    d=list(b)
    k=0
    s=1
    for i in range(len(d)):
        if(d[i]=='S'):
            k+=s
        else:
            s*=2
    if(k<=c):
        print("Case #"+str(h)+": "+str(0))
    elif(d.count('C')==0 or c<d.count('C')):
        print("Case #"+str(h)+": "+"IMPOSSIBLE")
    else:
        l=0
        m=1
        o=[]
        for i in range(len(d)-1):
            if(d[i]=='C'):
                m*=2
                j=i+1
                while(j<len(d) and d[j]=='S'):
                    o.append(m)
                    j+=1
                i=j
        swap=0
        #print(o,k,c)
        while(max(o)>1 and (k-int(max(o)*o.count(max(o))/2)>c)):
            #print(o,max(o),o.count(max(o)))
            k=k-int(max(o)*o.count(max(o))/2)
            swap=swap+o.count(max(o))
            o=[int(x/2) if x==max(o) else x for x in o]
            
        if(max(o)==1):
             print("Case #"+str(h)+": "+"IMPOSSIBLE")
        else:
            #print(k-c)
            z=swap+int(math.ceil((k-c)/(max(o)/2)))
            print("Case #"+str(h)+": "+str(z))
