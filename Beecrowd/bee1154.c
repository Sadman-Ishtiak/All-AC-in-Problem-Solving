#include<stdio.h>
int main()
{
    int i,c=0,s=0;
    float avg;
    for(i=0;i>=0;c++)
    {
        s+=i;
        scanf("%d",&i);
    }
    c--;
    avg=(float)s/c;
    printf("%.2f\n",avg);
    return 0;
}
