#include<stdio.h>
int main()
{
    int loop=1;
    while(loop==1)
    {
        float x,y;
        scanf("%f",&x);
        while((x<0)||(x>10))
        {
            printf("nota invalida\n");
            scanf("%f",&x);
        }
        scanf("%f",&y);
        while((y<0)||(y>10))
        {
            printf("nota invalida\n");
            scanf("%f",&y);
        }
        printf("media = %.2f",(x+y)/2);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&loop);
        while((loop!=1)&&(loop!=2))
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&loop);
        }
    }
    return 0;
}
