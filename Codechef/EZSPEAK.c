#include <stdio.h>

int main(void) {
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    int n,count=0;
	    scanf("%d",&n);
	    char s[n];
	    scanf("%s",&s);
	    for(int j=0;j<n;j++){
	        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
	            count=0;
	        else
	        {
	            count++;
	            if(count==4)
	                break;
	        }
	    }
	    if(count==4)
	        printf("NO\n");
	    else
	        printf("YES\n");
	}
	return 0;
}