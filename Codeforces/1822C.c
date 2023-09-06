#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    do{
        long long int n,choko;
        scanf("%lld",&n);
        choko=(n*(n-1)/2)+((n-1)*(n-2)/2)+(4*n)+1;
        printf("%lld\n",choko);
        t--;
    }while(t>0);
    return 0;
}
