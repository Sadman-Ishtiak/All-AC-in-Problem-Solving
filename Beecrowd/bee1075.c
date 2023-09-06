#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=2;i<10000;i++)
    {
        if(i%a==2)
            printf("%d\n",i);
    }
    return 0;
}

