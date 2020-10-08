class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if(matrix==[]):
            return []
        l=0
        r=len(matrix[0])
        t=0
        b=len(matrix)
        c=[]
        while(l<r and t<b):
            for i in range(l,r):
                print(matrix[t][i],1)
                c.append(matrix[t][i])
            t=t+1
            for i in range(t,b):
                print(matrix[i][r-1],2)
                c.append(matrix[i][r-1])
            r=r-1
            if(t<b):
                for i in range(r,l,-1):
                    print(matrix[b-1][i-1],3)
                    c.append(matrix[b-1][i-1])
            b=b-1
            if(l<r):
                for i in range(b,t,-1):
                    print(matrix[i-1][l],4)
                    c.append(matrix[i-1][l])
            l=l+1
        return c
        