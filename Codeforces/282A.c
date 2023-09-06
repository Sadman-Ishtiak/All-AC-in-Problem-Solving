#include<stdio.h>

int main()
{
    int t,count=0;
    char x[5];
    scanf("%d\n",&t);
    while(t>0){
        scanf("%s",x);
        if(x[1]=='+')
            count++;
        else
            count--;
        t--;
    }
    printf("%d",count);
    return 0;
}
