#include <stdio.h>

int main(void) {
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    printf("%d\n",x-y);
	}
	return 0;
}