class Solution(object):
    def minReorder(self, n, connections):
        d=[-1 for _ in range(n)]
        c=0
        for i in connections:
            if(i[0]<i[1] and d[i[1]]!=1):
                c+=1
                print(i)
            if(i[0]==0):
                d[i[1]]=1
            elif(i[1]==0):
                d[i[0]]=1
            if(d[i[0]]==1):
                if(d[i[1]]==-1):
                    d[i[1]]=1
            elif(d[i[1]]==1):
                if(d[i[0]]==-1):
                    d[i[0]]=1
        return c
