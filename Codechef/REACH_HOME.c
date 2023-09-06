#include <stdio.h>

int main(void) {
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    x=x*5;
	    if(x>=y)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;
}