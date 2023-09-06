#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int x = 0, y = 0, m = 0;
    scanf("%d", &x);
    y = x / 365;
    x = x - (y * 365);
    m = x / 30;
    x = x %30;
    if (m == 12)
    {
        y++;
        m=0;
    }
    printf("%d ano(s)\n", y);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", x);
    return 0;
}