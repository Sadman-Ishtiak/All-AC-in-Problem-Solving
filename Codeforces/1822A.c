#include<stdio.h>

int main()
{
    int q;
    scanf("%d",&q);
    do{
        int n,t;
        int best=0, j=0,sum=0;
        scanf("%d%d",&n,&t);
        int dur[n], ent[n];
        for(int i=0;i<n;i++)
            scanf("%d",&dur[i]);
        for(int i=0;i<n;i++)
            scanf("%d",&ent[i]);
        for(;j<n;j++)
        {
            //Find the best video
            for(int i=0;i<n;i++)
                if(ent[i]>ent[best])
                    best=i;
            //check it can be watched or not
            if(t>=(best+dur[best]))
            {
                printf("%d\n",best+1);
                sum++;
                break;
            }
            else
                ent[best]=0;
        }
        if(sum==0)
            printf("-1\n");
        q--;
    }while(q>0);
    return 0;
}
