def k(a,b):
    if (b == 0): 
        return a 
    return k(b, a%b) 
 
def gcd(a,b,c):
    return k(a,k(b,c))
 
x,y,p,q=[int(x) for x in input().split()]
a=p/x
b=q/y
c=1
e=p*y
f=q*x
g=x*y
z=gcd(e,f,g)
m=int(e/z)
n=int(f/z)
o=int(g/z)
print(m,n,o)