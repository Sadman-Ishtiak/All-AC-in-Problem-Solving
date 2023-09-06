#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int i=(x<y)?x:y;
    int j=(x>y)?x:y;
    for(;i<j;i++)
        if(i%5==3||i%5==2)
            printf("%d\n",i);
    return 0;
}
