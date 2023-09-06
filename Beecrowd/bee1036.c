#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, set, root;
    scanf("%f%f%f", &a, &b, &c);
    set = b * b - 4 * a * c;
    if ((set < 0) || (a == 0))
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        root = (-b + sqrt(set)) / (2 * a);
        printf("R1 = %.5f\n", root);
        root = (-b - sqrt(set)) / (2 * a);
        printf("R2 = %.5f\n", root);
    }
    return 0;
}