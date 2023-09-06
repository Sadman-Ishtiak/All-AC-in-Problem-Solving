#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t>0){
	    int n,x;
	    scanf("%d%d",&n,&x);
	    if(n<=x)
	        printf("YES\n");
	    else
	        printf("NO\n");
	    t--;
	}
	return 0;
}