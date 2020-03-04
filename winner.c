long long int c(long long int n,long long int k)
{
    if(k==1 && n%2==0)
    {
        return 2;
    }
    else if(k==1 && n%2==1)
    {
        return 1;
    }
    else if(n%(k+1)==0)
    {
        return 2;
    }
    else if(n-1==k)
    {
        return 2;
    }
    else if(k%2==1 && n/k==n%k)
    {
        return 2;
    }
    else if((n-k)%2==1)
    {
        return 1;
    }
    else if(n%k==0)
    {
        return 1;
    }
    else
    {
        return 1;
    }
    
}
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    long long int n,k,m;
    scanf("%d\n",&t);
    while(t--)
    {
        scanf("%lld %lld\n",&n,&k);
        m=c(n,k);
        
            
        //printf("%d %d %d\n",k%2==1, n,n/k+n%k);
        //printf("%d %d\n",n%k==0 , (n/k)%2==0);
        if(m%2==1)
        {
            printf("Arpa\n");
        }
        else
        {
            printf("Dishant\n");
        }
    }
    return 0;
}
