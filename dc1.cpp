#include<cstdio>
using namespace std;
bool onlysumsbelow(long S,long Q[],long N,long M)
{
    long p=1;
    long c=0;
    for(long i=0;i<N;i++)
    {
        if(Q[i]>S)
        {
            return false;
        }
        if(c+Q[i]>S)
        {
            c=Q[i];
            p+=1;
        }
        else
        {
            c+=Q[i];
        }
    }
    return p<=M;
}
 
int main(void)
{
    long N,M;
    scanf("%ld %ld\n",&N,&M);
    long int q[N];
    long maxm=0;
    for(long i=0;i<N;i++)
    {
        scanf("%ld ",&q[i]);
    }
    int S=maxm;
    long long maxsum=0;
    for(long j=0;j<N;j++)
    {
        maxsum=maxsum+q[j];
    }
    long l=S;
    long mid;
    long r=maxsum;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(onlysumsbelow(mid,q,N,M)==true)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    printf("%ld",l);
    return 0;
    
}
