#include <stdio.h>
int sum(int a, int b) {
    return (a+b);
}
int main() {
    int cases, caseno, a, b;
    scanf("%d", &cases);
    for (caseno = 1; caseno <= cases; ++caseno) {
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", caseno, sum(a, b));
    }
    return 0;
}