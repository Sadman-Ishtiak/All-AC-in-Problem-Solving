#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, k = 0, p = 0, q = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
            k++;
        if (n > 0)
            p++;
        if (n < 0)
            q++;
    }
    printf("%d valor(es) par(es)\n", k);
    printf("%d valor(es) impar(es)\n", 5 - k);
    printf("%d valor(es) positivo(s)\n", p);
    printf("%d valor(es) negativo(s)\n", q);
    return 0;
}