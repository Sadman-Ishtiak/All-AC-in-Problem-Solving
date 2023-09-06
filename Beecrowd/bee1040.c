#include <stdio.h>
#include <math.h>
int main()
{
    float n1, n2, n3, n4, avg;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    avg = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;
    printf("Media: %.1f\n", avg);
    if (avg >= 7)
        printf("Aluno aprovado.\n");
    else if (avg < 5)
        printf("Aluno reprovado.\n");
    else
    {
        printf("Aluno em exame.\n");
        float a, score;
        scanf("%f", &a);
        printf("Nota do exame: %.1f\n", a);
        score = (avg + a) / 2;
        if (score >= 5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n",score);
    }
    return 0;
}