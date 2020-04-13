t=int(input())
for u in range(1,t+1):
    n=input()
    a=[]
    for i in range(len(n)):
        if(i>0 and n[i]==n[i-1]):
            a.append(n[i])
            if(i==(len(n)-1)):
                for j in range(int(n[i])):
                    a.append(')')
            else:
                if(n[i]!=n[i+1]):
                    for j in range(int(n[i])):
                        a.append(')')

        else:
            for j in range(int(n[i])):
                a.append('(')
            a.append(n[i])
            if(i==(len(n)-1)):
                for j in range(int(n[i])):
                    a.append(')')
            else:
                if(n[i]!=n[i+1]):
                    for j in range(int(n[i])):
                        a.append(')')
    b=[]
    for i in a:
        if(i=='(' and len(b)>0 and b[-1]==')'):
            b.pop()
        else:
            b.append(i)
    print("Case #"+str(u)+": "+"".join(b))