#include<stdio.h>
#include<math.h>

int primecheck(int n);

int main()
{
    int t;
    scanf("%d",&t);
    do{
        int n,flag=0;
        scanf("%d",&n);
        flag=primecheck(n);
        if(flag!=0)
            printf("%d nao eh primo\n",n);
        else
            printf("%d eh primo\n",n);
        t--;
    }while(t>0);
    return 0;
}
int primecheck(int n){
    int flag=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag++;
            break;
        }
    }
    return flag;
}
