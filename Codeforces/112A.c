#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    //Input the strings
    char x[101],y[101];
    scanf("%s %s",x,y);
    //Lowercasing both strings
    for(int i=0;i<100;i++)
        x[i]=tolower(x[i]);
    for(int i=0;i<100;i++)
        y[i]=tolower(y[i]);
    //Comparison Area
    if(strcmp(x,y)>0)
        printf("1\n");
    else if(strcmp(x,y)<0)
        printf("-1\n");
    else
        printf("0\n");
    return 0;
}
