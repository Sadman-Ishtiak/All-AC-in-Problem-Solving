#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d",&a);
    float x,y,z;
    for(int i=0;i<a;i++)
    {
        scanf("%f%f%f",&x,&y,&z);
        printf("%.1f\n",(x*2+y*3+z*5)/10);
    }
    return 0;
}


