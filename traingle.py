def f(n):
	if(n==0):
	    return 1
	else:
	    return ((((2%1000000007)*pow(3,n,1000000007))%1000000007)-1)%1000000007
    
    
m=1000000007
t=int(input())
for _ in range(t):
	n=int(input())
	print(f(n))
