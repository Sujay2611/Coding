def josephus(n): 
    p = 1
    while p <= n: 
        p *= 2
  
    # Return 2n - 2^(1 + floor(Logn)) + 1 
    return (2 * n) - p + 1
 
 
t=int(input())
for _ in range(t):
    n,k=[int(x) for x in input().split()]
    print((josephus(n)+2*k)%n)