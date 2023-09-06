#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    float x,tax=0;
    scanf("%f",&x);
    if(x>4500){
        tax=270+80+(x-4500)*.28;
        printf("R$ %.2f\n",tax);
    }
    else if((x<=4500)&&(x>3000)){
        tax=(x-3000)*.18+80;
        printf("R$ %.2f\n",tax);
    }
    else if((x<=3000)&&(x>2000)){
        tax=(x-2000)*.08;
        printf("R$ %.2f\n",tax);
        }
    else if(x<=2000)
        printf("Isento\n");
    else{}
    return 0;
}

