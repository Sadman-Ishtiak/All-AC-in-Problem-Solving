#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
        scanf("%d",&n);
        if (n>100)
        {
            n = n - 10;
        }
        printf("%d\n",n);
	}
	return 0;
}