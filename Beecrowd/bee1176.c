#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    do{
        long long n,i=0,n1=0,n2=1,tem;
        scanf("%lld",&n);
        while(i!=n){
            tem=n1+n2;
            n1=n2;
            n2=tem;
            i++;
        }
        printf("Fib(%lld) = %lld\n",n,n1);
        t--;
    }while(t>0);
    return 0;
}
