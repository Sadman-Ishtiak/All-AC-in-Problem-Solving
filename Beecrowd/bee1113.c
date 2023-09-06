#include<stdio.h>
int main()
{
    int j,i;
    scanf("%d%d",&i,&j);
    while(j!=i)
    {
        if(i>j)
            {
                printf("Decrescente\n");
                scanf("%d%d",&i,&j);
            }
        else if(i<j)
            {
                printf("Crescente\n");
                scanf("%d%d",&i,&j);
            }
        else{}
    }
    return 0;
}
