#include<stdio.h>
int main()
{
    int i,k,sum=0,x,c=0,r=0,s=0;
    char a;
    scanf("%d",&x);
    for(i = 0 ; i < x ; i++)
    {
        scanf("%d",&k);
        scanf(" %c",&a);
        sum=sum+k;
        if(a=='C')
            c+=k;
        else if(a=='R')
            r+=k;
        else if(a=='S')
            s+=k;
            else{}
    }
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",(c*100.0)/sum);
    printf("Percentual de ratos: %.2f %%\n",(r*100.0)/sum);
    printf("Percentual de sapos: %.2f %%\n",(s*100.0)/sum);
    return 0;
}
