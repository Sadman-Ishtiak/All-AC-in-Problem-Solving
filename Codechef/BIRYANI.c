#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t>0){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    printf("%d\n",x*y);
	    t--;
	}
	return 0;
}