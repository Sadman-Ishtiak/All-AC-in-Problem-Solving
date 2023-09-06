#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t>0){
	    int max1, max2;
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++)
	        scanf("%d",&a[i]);
	    max1=0;
	    max2=0;
	    for(int i=0;i<n;i++)
	        if(a[i]>max1)
	            max1=a[i];
        for(int i=0;i<n;i++)
            if((a[i]>max2)&&(a[i]!=max1))
	            max2=a[i];
	    printf("%d\n",max1+max2);
	    t--;
	}
	return 0;
}