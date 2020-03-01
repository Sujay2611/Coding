t=int(input())
for _ in range(t):
    s=input()
    t=list(s)
    c=1
    u=1
    v=t[0]
    w=[]
    while(u<len(t)):
        if(t[u]==v):
            u+=1
            c+=1
        else:
            w.append(v)
            w.append(str(c))
            c=1
            v=t[u]
            u+=1
    w.append(t[-1])
    w.append(str(c))
    x="".join(w)
    if(len(x)<len(t)):
        print("YES")
    else:
        print("NO")
        
