#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int a;
	    scanf("%d",&a);
	    if(a%3==0)
	    printf("YES\n");
	    else 
	    printf("NO\n");
	}
	return 0;
}
