#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int n,sum=0;
        scanf("%lld",&n);
        while(n>0){
            sum = sum +n;
            n = n/2;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
