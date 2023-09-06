#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d",&n);
        int a,m=0,b=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a);
            if(a%2==0)
                m=m+a;
            else
                b=b+a;
        }
        if(m>b)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
