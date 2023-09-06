#include <stdio.h>
#include <math.h>
int main()
{
    int positive = 0;
    float x[6], sum = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &x[i]);
        if (x[i] > 0)
        {
            positive++;
            sum = sum + x[i];
        }
    }
    printf("%d valores positivos\n%.1f\n", positive,sum/positive);
    return 0;
}