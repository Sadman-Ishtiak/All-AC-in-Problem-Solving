#include<stdio.h>
int main()
{
    float i=0,j=1;
    do{
        if((i>0&&i<1)||(i>1&&i<2))
        {
            printf("I=%.1f J=%.1f\n",i,j+i);
            printf("I=%.1f J=%.1f\n",i,j+1+i);
            printf("I=%.1f J=%.1f\n",i,j+2+i);
        }
        else
        {
            printf("I=%d J=%d\n",(int)i,(int)j+(int)i);
            printf("I=%d J=%d\n",(int)i,(int)j+(int)i+1);
            printf("I=%d J=%d\n",(int)i,(int)j+(int)i+2);
        }
        i+=0.2;
    }while(i<2.2);
    getchar();
    return 0;
}
