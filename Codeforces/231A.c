#include<stdio.h>
int main()
{
    int a,b,c,n=0,k;
    scanf("%d",&k);
    while(k!=0){
        a=0;b=0;c=0;
        scanf("%d%d%d",&a,&b,&c);
        if(a+b+c>=2)
            n++;
        k--;
    }
    printf("%d",n);
    return 0;
}
