#include <stdio.h>
#include <math.h>
int main()
{
    int n1, n2, i, sum = 0;
    scanf("%d%d", &n1, &n2);
    if (n1 > n2)
    {
        for (i = (n2 + 1); i < n1; i++)
            if ((i % 2 != 0))
                sum = sum + i;
    }
    else if (n1 < n2)
    {
        for (i = (1 + n1); i < n2; i++)
            if ((i % 2 != 0))
                sum = sum + i;
    }
    else
    {
    }
    printf("%d\n", sum);
    return 0;
}