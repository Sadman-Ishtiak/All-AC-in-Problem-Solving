#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld",&a[i]);
        }
        long long int ans = 0, sum = 0, flag = 0;
        //flag 0 == positive
        //flag 1 == negative
        if(a[0]<0)
        {
            flag = 1;
            ans++;
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]>=0)
                sum = sum + a[i];
            else
                sum = sum + (-1)*a[i];
            if(i>0)
            {
                if(a[i]>0 && flag == 1)
                {
                    flag = 0;
                }
                if(a[i]<0 && flag==0)
                {
                    flag = 1;
                    ans++;
                }
            }
        }
        printf("%lld %lld\n",sum,ans);
    }
    return 0;
}
