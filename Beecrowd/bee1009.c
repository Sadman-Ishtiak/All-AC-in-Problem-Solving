#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    gets(name);
    float sal, sel;
    scanf("%f%f", &sal, &sel);
    printf("TOTAL = R$ %.2f\n", sal + sel * .15);
    return 0;
}