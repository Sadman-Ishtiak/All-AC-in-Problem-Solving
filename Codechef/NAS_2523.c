#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t>0){
	    int n;
	    scanf("%d",&n);
	    if(n%2==0)
	        for(int i=n;i>0;i--)
	            printf("%d ",i);
	    else
	        printf("-1");
	    printf("\n");
	    t--;
	}
	return 0;
}