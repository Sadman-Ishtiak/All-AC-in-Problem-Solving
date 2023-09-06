#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t>0){
	    int n,ans;
	    scanf("%d",&n);
	    ans=n*15;
	    printf("%d\n",ans);
	    t--;
	}
	return 0;
}