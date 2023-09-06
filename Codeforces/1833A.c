#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    do{
        int n,result;
        scanf("%d",&n);
        char melody[n+1],tune[n-1][3];
        scanf("%s",melody);
        result=n-1;
        for(int i=0;i<(n-1);i++)
        {
            tune[i][0]=melody[i];
            tune[i][1]=melody[i+1];
        }
        for(int i=0;i<(n-1);i++)
        {
            int unique=1;
            for(int j=i+1;j<(n-1);j++)
            {
                if((tune[i][0]==tune[j][0])&&(tune[i][1]==tune[j][1]))
                    unique=0;
            }
            if(unique==0)
                result--;
        }
        printf("%d\n",result);
        t--;
    }while(t>0);
    return 0;
}
