t=int(input())
for _ in range(t):
    n=int(input())
    a=[int(x) for x in input().split()]
    b=[]
    for i in a:
        b.append(a.count(i))
    print(n-max(b))
