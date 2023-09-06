#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(;t>0;t--)
    {
        char text[10], box[10];
        box[0]='c';
        box[1]='o';
        box[2]='d';
        box[3]='e';
        box[4]='f';
        box[5]='o';
        box[6]='r';
        box[7]='c';
        box[8]='e';
        box[9]='s';
        int a=0;
        scanf("%s\n",text);
        for(int i=0;i<10;i++)
        {
            if(box[i]!=text[i])
                a++;
        }
        printf("%d\n",a);
    }
    return 0;
}
