#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if((x*y)%2==0)
        printf("%d",x*y/2);
    else
        printf("%d",(x*y-1)/2);
    return 0;
}
