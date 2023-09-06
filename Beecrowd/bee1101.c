#include<stdio.h>

float valid(){
    float x;
    scanf("%f",&x);
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
    float a,b;
    a=valid();
    b=valid();
    printf("media = %.2f\n",(a+b)/2);
    return 0;
}
