#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t>0){
	    int x;
	    scanf("%d",&x);
	    printf("%d\n",x*10);
	    t--;
	}
	return 0;
}