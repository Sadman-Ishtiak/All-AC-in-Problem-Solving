#include <stdio.h>
#include <math.h>
int main()
{
    int c, t;
    scanf("%d", &t);
    int n[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);
    }
    
    for (int i = 0; i < t; i++)
    {
        int temp = n[i], c = 0;
        for (; temp != 0;) //loop to calculate digits
        {
            if (temp % 10 != 0)
                c++;
            temp = temp / 10;
        }
        printf("%d\n", c);
        temp = n[i];
        for (int j = 1; temp > 0; j *= 10)
        {
            if (temp % 10 != 0)
                printf("%d\t",(temp%10)* j);
            temp = temp / 10;
        }
        printf("\n");
    }
    return 0;
}