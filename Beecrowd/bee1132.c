#include<stdio.h>

int main()
{
    int x,y,sum=0;
    scanf("%d%d",&x,&y);
    int min=((x<y)?x:y);
    int max=((x>y)?x:y);
    for(int i=min;i<=max;i++)
        if(i%13!=0)
            sum+=i;
    printf("%d\n",sum);
    return 0;
}
