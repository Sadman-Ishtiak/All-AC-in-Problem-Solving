#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    do{
        int a,b,min,max,sum=0;
        scanf("%d%d",&a,&b);
        min=(a<b)?a:b;
        max=(a>b)?a:b;
        for(min++;min<max;min++)
            if(min%2!=0)
                sum+=min;
        printf("%d\n",sum);
        t--;
    }while(t>0);
    return 0;
}
