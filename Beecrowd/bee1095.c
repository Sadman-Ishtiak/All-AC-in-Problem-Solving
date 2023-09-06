#include<stdio.h>
int main()
{
    int j=60,i=1;
    for(;j>-1;)
    {
        printf("I=%d J=%d\n",i,j);
        i+=3;
        j-=5;
    }
    return 0;
}
