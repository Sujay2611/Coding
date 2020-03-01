t=int(input())
for _ in range(t):
    k=input()
    l=list(k)
    if(l.count('1')%2):
        print('WIN')
    else:
        print('LOSE')
