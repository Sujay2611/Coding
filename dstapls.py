t=int(input())
for _ in range(t):
    n,k=[int(x) for x in input().split()]
    if(k==1 or (n%(k*k))==0):
        print('NO')
    else:
        print('YES')
