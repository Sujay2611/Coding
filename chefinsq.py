import operator as op
from functools import reduce

def ncr(n, r):
    r = min(r, n-r)
    numer = reduce(op.mul, range(n, n-r, -1), 1)
    denom = reduce(op.mul, range(1, r+1), 1)
    return int(numer/denom)

t=int(input())
for _ in range(t):
    a,b=[int(x) for x in input().split()]
    c=[int(x) for x in input().split()]
    c.sort()
    if(a==b):
        print(1)
    elif(c[b-1]!=c[b]):
        print(1)
    else:
        x=c[:b]
        y=x.count(c[b-1])
        z=c.count(c[b-1])
        print(ncr(z,y))
