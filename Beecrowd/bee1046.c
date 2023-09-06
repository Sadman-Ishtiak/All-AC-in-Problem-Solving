#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, dif = 0;
    scanf("%d%d", &x, &y);
    do
    {
        dif++;
    } while ((x + dif) % 24 != y);
    printf("O JOGO DUROU %d HORA(S)\n", dif);
    return 0;
}