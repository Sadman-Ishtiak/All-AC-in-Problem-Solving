#include <stdio.h>

int main()
{
    int i, n;
    float a[6], pay;
    a[1] = 4.00;
    a[2] = 4.50;
    a[3] = 5.00;
    a[4] = 2.00;
    a[5] = 1.50;
    scanf("%d%d", &i, &n);
    pay = n * a[i];
    printf("Total: R$ %.2f\n", pay);
    return 0;
}