#include <stdio.h>
#include <math.h>
int main()
{
    int num, highest, position;
    for (int i = 1; i <= 100; i++)
    {
        scanf("%d", &num);
        if (highest < num)
        {
            highest = num;
            position = i;
        }
    }
    printf("%d\n%d\n", highest, position);
    return 0;
}