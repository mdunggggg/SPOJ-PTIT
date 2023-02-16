#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
    long long n,m,i,j;
    long d=1;
    scanf("%lld",&n);
    for(i=2;i*i<=n;i++)
    if(n%i==0)
    {
        long k=0;
        while(n%i==0) {n=n/i;k++;}
        d*=2*k+1;
    }
    if(n>1) d*=3;
    printf("%ld\n",d);
    t--;
    }
}