#include<stdio.h>

int main(){
    int col;
    char op;
    double m[12][12],sum=0;
    scanf("%d\n",&col);
    scanf("%c\n",&op);
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            scanf("%lf",&m[i][j]);
            if(j==col)
                sum+=m[i][j];
        }
    }
    if(op == 'S')
        printf("%.1f\n",sum);
    else
        printf("%.1f\n",sum/12.0);
    return 0;
}
