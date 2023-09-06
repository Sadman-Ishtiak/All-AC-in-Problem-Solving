#include <stdio.h>
#include <math.h>
int main()
{
    float a[6];
    int c = 0;
    for (int i = 0; i <= 5; i++)
    {
        scanf("%f", &a[i]);
        if (a[i] > 0)
            c++;
    }
    printf("%d valores positivos\n",c);
    return 0;
}