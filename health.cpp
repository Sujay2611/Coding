    #include<iostream>
    using namespace std;
    int main()
    {
        int t,n,m;
        
        scanf("%d\n",&t);
        while(t--)
        {
            scanf("%d %d\n",&n,&m);
            long int A[n];
            long int B[m];
            long int C[n];
            long int D[n];
            
            for(int i=0;i<n;i++)
            {
                scanf("%ld ",&A[i]);
            }
            for(int j=0;j<m;j++)
            {
                scanf("%ld ",&B[j]);
            }
            for(int i=0;i<n;i++)
            {
                C[i]=-1;
            }
            for(int i=0;i<m;i++)
            {
                for(int j=i;j<=n; )
                {
                    if(B[i]>=A[j] && C[j]==-1)
                    {
                        C[j]=i+1;
                        
                    }
                    j=j+i+1;
                }
            }
            for(int i=0;i<n;i++)
            {
                printf("%ld\n",C[i]);
            }
            
        }
        return 0;
        
    }
