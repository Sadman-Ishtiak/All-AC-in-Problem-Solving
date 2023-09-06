#include<stdio.h>
#include<string.h>

int main()
{
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        char s[250];
        scanf("%s",&s);
        if(strlen(s)>10)
        {
            printf("%c",s[0]);
            printf("%d",strlen(s)-2);
            printf("%c\n",s[strlen(s)-1]);
        }
        else
            printf("%s\n",s);
    }
    return 0;
}