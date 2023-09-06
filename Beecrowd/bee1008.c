#include <stdio.h>
int main()
{
    int number;
    float hour, salary, pay;
    scanf("%d%f%f", &number, &hour, &pay);
    salary = pay * hour;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);
    return 0;
}