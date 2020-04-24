def binarySearchCount(arr, n, key): 
  
    left = 0
    right = n - 1
  
    count = 0
  
    while (left <= right):  
        mid = int((right + left) / 2) 
  
        if (arr[mid] < key):  
  
            
            count = mid + 1
            left = mid + 1
          
        
        else: 
            right = mid - 1
      
    return count 
 
import math
n,m=[int(x) for x in input().split()]
a=[int(x) for x in input().split()]
b=[int(x) for x in input().split()]
if(max(a)>max(b)):
        print(-1)
else:
        a.sort()
        b.sort()
        c=a[::-1]
        z=0
        zz=[0 for i in range(m+1)]
        for i in range(n):
                u=m-binarySearchCount(b,m,c[i])
                zz[u]+=1
                if(u<=i):
                        z+=1
        #print(zz)
        if(z==0):
                y=math.ceil(n/m)
                print(2*y-1)
        
        else:
                print(2*max(zz)-1)
