#include <stdio.h>
#include <math.h>
//Compiler version gcc  6.3.0

int main()
{
  long long int m,n,a,cm,cn,total;
  scanf("%lld%lld%lld",&n,&m,&a);
  if(a==1){
      total=m*n;
      goto pon;
  }
  if(m%a!=0)
    cm=m/a+1;
  else
    cm=m/a;
  if(n%a!=0)
    cn=n/a+1;
  else
    cn=n/a;
  total=cm*cn;
  pon:
  printf("%lld",total);
  return 0;
}