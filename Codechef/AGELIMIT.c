#include <stdio.h>

int main(void) {
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    int x,y,a;
	    scanf("%d%d%d",&x,&y,&a);
	    if(a>=x&&a<y)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;
}