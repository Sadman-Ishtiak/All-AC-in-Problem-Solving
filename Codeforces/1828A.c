#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int out[n], sum=0;
        for(int i=0; i<n; i++)
        {
            out[i] = i+1;
            sum = sum + out[i];
        }
        out[0] = out[0] + sum%n;
        for(int i=0;i<n;i++)
            printf("%d ",out[i]);
        printf("\n");
    }
    return 0;
}
