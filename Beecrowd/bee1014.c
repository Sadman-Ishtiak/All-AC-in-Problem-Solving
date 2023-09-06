#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int x;
    float y;
    scanf("%d%f", &x, &y);
    printf("%.3f km/l\n", x / y);
    return 0;
}