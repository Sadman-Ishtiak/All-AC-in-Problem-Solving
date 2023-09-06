#include<stdio.h>
int main()
{
    float n[100];
    for(int i=0;i<100;i++)
    {
        scanf("%f",&n[i]);
    }
    for(int i=0;i<100;i++)
    {
        if(n[i]<=10)
            printf("A[%d] = %.1f\n",i,n[i]);
    }
    return 0;
}
