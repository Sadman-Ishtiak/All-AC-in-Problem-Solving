#include <stdio.h>
#include <math.h>
int main()
{
    int hs, ms, he, me, time;
    scanf("%d%d%d%d", &hs, &ms, &he, &me);
    time = ((he * 60) + me) - ((hs * 60) + ms);
    if (time <= 0)
        time = time + (60 * 24);
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", time / 60, time % 60);
    return 0;
}