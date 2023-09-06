#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int m,n2,n5,n10,n20,n50,n100;
    scanf("%d",&m);
    printf("%d\n",m);
    n100=m/100;
    m=m-n100*100;
    printf("%d nota(s) de R$ 100,00\n",n100);
    n50=m/50;
    m=m-n50*50;
    printf("%d nota(s) de R$ 50,00\n",n50);
    n20=m/20;
    m=m-n20*20;
    printf("%d nota(s) de R$ 20,00\n",n20);
    n10=m/10;
    m=m-n10*10;
    printf("%d nota(s) de R$ 10,00\n",n10);
    n5=m/5;
    m=m-n5*5;
    printf("%d nota(s) de R$ 5,00\n",n5);
    n2=m/2;
    m=m-n2*2;
    printf("%d nota(s) de R$ 2,00\n",n2);
    printf("%d nota(s) de R$ 1,00\n",m);
    return 0;
}