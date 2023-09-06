#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t>0){
	    int alice,bob,a,b,flag=0;
	    scanf("%d%d",&alice,&bob);
	    if((alice%2==0)&&(bob%2==0))
	        printf("YES\n");
	    else if((alice%2!=0)&&(bob%2!=0))
	        printf("YES\n");
	    else
	        printf("NO\n");
	    t--;
	}
	return 0;
}