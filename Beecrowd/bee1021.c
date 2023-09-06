#include <stdio.h>
double money;
float count(int note);
float dracula(int coin);
int main()
{
    scanf("%lf", &money);
    printf("NOTAS:\n");
    count(100);
    count(50);
    count(20);
    count(10);
    count(5);
    count(2);
    money = money * 100;
    printf("MOEDAS:\n");
    dracula(100);
    dracula(50);
    dracula(25);
    dracula(10);
    dracula(5);
    dracula(1);
    return 0;
}

//custom functions.
float count(int note)
{
    int n;
    n = money / note;
    money = money - (note * n);
    printf("%d nota(s) de R$ %d.00\n", n, note);
    return n;
}
float dracula(int coin)
{
    int n;
    n = money / coin;
    money = money - (coin * n);
    if (coin == 100)
        printf("%d moeda(s) de R$ 1.00\n", n);
    else if ((coin == 50) || (coin == 25) || (coin == 10))
        printf("%d moeda(s) de R$ 0.%d\n", n, coin);
    else
        printf("%d moeda(s) de R$ 0.0%d\n", n, coin);
    return n;
}