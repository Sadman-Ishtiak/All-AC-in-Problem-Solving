#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t>0){
	    int n,a=0,b=0;
	    scanf("%d",&n);
	    char g[n+1],serve='A';
	    scanf("%s",&g);
	    for(int i=0;i<n;i++)
	    {
	        if(serve==g[i])
	        {
	            if(serve=='A')
	                a++;
	            else
	                b++;
	        }
	        else
	        {
	            serve=g[i];
	        }
	    }
	    printf("%d %d\n",a,b);
	    t--;
	}
	return 0;
}