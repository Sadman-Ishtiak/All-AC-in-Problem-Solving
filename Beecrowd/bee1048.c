#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    scanf("%f", &a);
    if ((a > 0) && (a <= 400))
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", a + a * 0.15, a * 0.15);
    }
    else if ((a > 400) && (a <= 800))
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", a + a * 0.12, a * 0.12);
    }
    else if ((a > 800) && (a <= 1200))
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", a + a * 0.10, a * 0.10);
    }
    else if ((a > 1200) && (a <= 2000))
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", a + a * 0.07, a * 0.07);
    }
    else if (a > 2000)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", a + a * 0.04, a * 0.04);
    }
    else
    {
    }
    return 0;
}