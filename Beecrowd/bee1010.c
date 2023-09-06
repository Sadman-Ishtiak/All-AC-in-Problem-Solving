#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, a2, b2;
    float c, c2;
    scanf("%d%d%f", &a, &b, &c);
    scanf("%d%d%f", &a2, &b2, &c2);
    printf("VALOR A PAGAR: R$ %.2f\n", b * c + b2 * c2);
    return 0;
}