#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    for(int count=0,i=1;count<n;i++)
    {
        if(i%4==0){
            printf("PUM\n");
            count++;
        }
        else
        {
            printf("%d",i);
            printf(" ");
        }
    }
    return 0;
}
