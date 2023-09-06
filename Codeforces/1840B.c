#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        k = (k < 30) ? k : 30;
        int result = (n < ((1 << k) - 1)) ? n : ((1 << k) - 1);
        printf("%d\n", result + 1);
    }

    return 0;
}