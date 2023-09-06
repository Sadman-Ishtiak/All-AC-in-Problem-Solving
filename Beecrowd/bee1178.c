#include<stdio.h>

int main()
{
    float x;
    scanf("%2f",&x);
    for(int i=0;i<100;i++)
    {
        printf("N[%d] = %.4f\n",i,x);
        x=x/2;
    }
    return 0;
}
