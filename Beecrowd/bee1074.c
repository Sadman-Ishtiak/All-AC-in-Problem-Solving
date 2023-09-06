#include <stdio.h>
#include <math.h>
int main()
{
    int num, a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &num);
        if (num == 0)
            printf("NULL");
        else
        {
            if (num % 2 == 0)
                printf("EVEN ");
            else
                printf("ODD ");
            if (num > 0)
                printf("POSITIVE");
            else
                printf("NEGATIVE");
        }
        printf("\n");
    }
    return 0;
}