#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t>0){
	    int cost,n,x,ans=0;
	    scanf("%d%d",&n,&x);
	    cost=n*x;
	    while(cost>0){
	        cost=cost/10;
	        ans++;
	    }
	    if(ans==5)
	        printf("YES\n");
	    else
	        printf("NO\n");
	    t--;
	}
	return 0;
}