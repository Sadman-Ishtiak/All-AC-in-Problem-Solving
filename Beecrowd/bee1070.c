#include <stdio.h>
#include <math.h>
int main()
{
    int n1, n2 = 0, i, sum = 0;
    scanf("%d", &n1);
    for (i = n1; n2 != 6; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
            n2++;
        }
    }
    return 0;
}