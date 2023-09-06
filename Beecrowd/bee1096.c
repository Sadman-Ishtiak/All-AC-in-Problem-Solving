#include<stdio.h>

int main()
{
    int i,j;
    for(i=1,j=7;i<10;j--){
        printf("I=%d J=%d\n",i,j);
        if(j==5)
            {i=i+2;j=8;}
    }
    return 0;
}
