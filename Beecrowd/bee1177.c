#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<1000;i++)
        printf("N[%d] = %d\n",i,i%t);
    return 0;
}
