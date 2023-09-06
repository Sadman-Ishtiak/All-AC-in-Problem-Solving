#include <stdio.h>
int main()
{
    int j;
    float x[12],sum=0;
    char c;
    scanf("%d", &j);
    scanf("%c", &c);
    for (int i = 0; i < 12; i++)
        scanf("%.1f", &x[i]);
    for(int i=0;i<j;i++)
        sum =sum + x[i];
    if (c == 'S')
        printf("%.1f", sum);
    else if (c == 'M')
        printf("%.1f", sum / 12);
    return 0;
}
