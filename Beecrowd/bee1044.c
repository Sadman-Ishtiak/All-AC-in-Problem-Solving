#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if ((y % x ==0) || (x % y == 0))
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
    return 0;
}