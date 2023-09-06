#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        int temp = 0;
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 1; i < n; i++){
            if(a[i] < a[i-1]){
                temp = (temp > a[i-1]) ? temp : a[i-1];
            }
        }
        printf("%d\n", temp);
    }
    return 0;
}
