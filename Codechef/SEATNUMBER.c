#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t>0){
	    int n;
	    scanf("%d",&n);
	    if(n>=1&&n<=10)
	        printf("Lower Double");
	    if(n>=11&&n<=15)
	        printf("Lower Single");
	    if(n>=16&&n<=25)
	        printf("Upper Double");
	    if(n>=26&&n<=30)
	        printf("Upper Single");
	    printf("\n");
	    t--;
	}
	return 0;
}