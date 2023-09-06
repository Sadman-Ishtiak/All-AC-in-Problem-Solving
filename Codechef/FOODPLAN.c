#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t>0){
	    float on,of;
	    scanf("%f%f",&on,&of);
	    on=0.9*on;
	    if(on<of)
	    printf("ONLINE\n");
	    else if(of<on)
	    printf("DINING\n");
	    else
	    printf("EITHER\n");
	    t--;
	}
	return 0;
}