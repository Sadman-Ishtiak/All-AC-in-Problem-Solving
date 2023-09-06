#include <stdio.h>
#include <math.h>
int main()
{
    int num, c = 0, a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &num);
        if (num <= 20 && num >= 10)
            c++;
    }
    printf("%d in\n%d out\n",c,a-c);
    return 0;
}