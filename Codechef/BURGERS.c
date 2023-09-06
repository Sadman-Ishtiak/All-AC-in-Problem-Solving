#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t>0){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    int r=(x<y)?x:y;
	    printf("%d\n",r);
	    t--;
	}
	return 0;
}