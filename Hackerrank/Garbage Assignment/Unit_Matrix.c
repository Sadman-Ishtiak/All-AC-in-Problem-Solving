#include<stdio.h>
#include<stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];
    bool ans = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if(i == j) {
                if(a[i][j] != 1) ans = false;
            }
            if(i != j){
                if(a[i][j] != 0) ans = false;
            }
        }
    }
    if(ans) printf("YES\n");
    else printf("NO\n");
    return 0;
}