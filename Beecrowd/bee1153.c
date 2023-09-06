#include<stdio.h>
int main()
{
    int i,x,y=1;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        y=y*i;
    }
    printf("%d\n",y);
    return 0;
}

