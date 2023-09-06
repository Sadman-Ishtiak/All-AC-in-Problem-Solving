#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int x=0,h=0,m=0,s=0;
    scanf("%d",&x);
    s=x%60;
    m=(x/60)%60;
    h=x/3600;
    printf("%d:%d:%d\n",h, m,s);
    return 0;
}