#include<stdio.h>
int main()
{
    int a,b,sum,k;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d%d%d",&a,&b,&sum);
        if(a+b==sum)
            printf("+\n");
        else
            printf("-\n");
    }
    return 0;
}
