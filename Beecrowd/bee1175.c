#include<stdio.h>
int main()
{
    long int x,y,t;
    int ds,de,hs,he,ms,me,ss,se,d,h,m,s;
    scanf("Dia %d",&ds);
    scanf("%d : %d : %d",&hs,&ms,&ss);
    scanf("Dia %d",&de);
    scanf("%d : %d : %d",&he,&me,&se);
    x=ss+ms*60+hs*3600+ds*3600*24;
    y=se+me*60+he*3600+de*3600*24;
    t=y-x;
    d=(t/(3600*24));
    t=(t%(3600*24));
    h=(t/3600);
    t=t%3600;
    m=t/60;
    s=t%60;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n");
    return 0;
}
