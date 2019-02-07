#include <stdio.h>

int main()
{
  int f1=0,f2=1,f3,n,i;
 scanf("%d",&n);
 printf("%d",f2);
 f3=f1+f2;
 printf("%d",f3);
 for(i=3;i<=n;i++)
 {
     f1=f2;
     f2=f3;
     f3=f1+f2;
    printf("%d",f3);
 }
    return 0;
}
