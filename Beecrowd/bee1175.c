#include<stdio.h>
int main()
{
    int n[20],i;
    for(i=0;i<20;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=19;i>-1;i--)
    {
        printf("N[%d] = %d\n",19-i,n[i]);
    }
    return 0;
}
