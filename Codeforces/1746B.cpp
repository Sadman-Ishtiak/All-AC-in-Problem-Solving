#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int in[n], one = 0, zero = n-1,count=0;
        for(int i=0; i<n; i++)
            scanf("%d",&in[i]);
        while(zero>one){
            if((in[one]==1) && (in[zero]==0))
            {
                count++;
                one++;
                zero--;
            }
            else if(in[one]==0)
                one++;
            else if(in[zero]==1)
                zero--;
            else{}
        }
        printf("%d\n",count);
    }
    return 0;
}
