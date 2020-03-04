import math
t=int(input())
for _ in range(t):
    n=int(input())
    if(n<=3):
        print(0)
    else:
        b=1+math.floor((n*(n-4))/6)
        print(3*b)
