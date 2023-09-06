#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t>0){
        int x,y;
        scanf("%d%d",&x,&y);
        if(y==0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n",(float)x/y);
        t--;
    }
    return 0;
}
