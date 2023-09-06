#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    do{
        int x,sum=0;
        scanf("%d",&x);
        for(int i=1;i<x;i++)
            if(x%i==0)
                sum=sum+i;
        if(sum==x)
            printf("%d eh perfeito\n",x);
        else
            printf("%d nao eh perfeito\n",x);
        t--;
    }while(t>0);
    return 0;
}
