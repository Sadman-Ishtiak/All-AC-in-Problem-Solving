#include<stdio.h>

double valid(){
    double x;
    scanf("%lf",&x);
    if(x>10){
            printf("nota invalida\n");
            x=valid();
        }
    else if(x<0){
            printf("nota invalida\n");
            x=valid();
        }
    else
        return x;
}
int main(){
    double a,b,avg;
    a=valid();
    b=valid();
    avg=(a+b)/2;
    printf("media = %.2lf\n",avg);
    return 0;
}
