import math
t=int(input())
for _ in range(t):
    n,m=[int(x) for x in input().split()]
    k=int((n*(n+1))/2)
    if(n==1):
        if(m==0):
            print(0)
        elif(m==1):
            print(1)
        else:
            print(-1)
    elif(m==0 or  m>k or m<n-1):
        print(-1)
    elif(m==1 and n==2):
        print(1)
    elif(n==2):
        print(2)
    elif(n>2):
        if(m<=2*n):
            if(m==n-1 or m==n or m==n+1):
                print(2)
            else:
                print(3)
        else:
            if(n%2==0):
                p=int(n/2)
                print(4+math.floor((m-1-(2*n))/p))
            else:
                p=math.floor(n/2)
                q=math.floor((m-1-(2*n))/n)
                r=(m-1)%n
                if(r<p):
                    print(4+(2*q))
                else:
                    print(4+1+(2*q))
                
            
            
        
