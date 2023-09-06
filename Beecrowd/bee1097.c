#include<stdio.h>

int main()
{
    int i=1,j=7,count=0;
    while(i<=10)
    {
        do{
            printf("I=%d J=%d\n",i,j);
            j--;
            count++;
            if(count==3)
            {
                j+=5;
            }
        }while(count<3);
        count=0;
        i+=2;
    }
    return 0;
}
