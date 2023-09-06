#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, k = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
            k++;
    }
    printf("%d valores pares\n",k);
    return 0;
}