#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    do{
        int n,j=0,i=1;
        scanf("%d",&n);
        char txt[n+1],ans[n+1];
        scanf("%s",txt);
        ans[0]=txt[0];
        for(i=1; i<n; i++){
            if(ans[j]==txt[i]){
                j++;
                i++;
                ans[j]=txt[i];
            }
        }
        printf("%s\n",ans);
        t--;
    }while(t>0);
    return 0;
}
