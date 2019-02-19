#include <stdio.h>

int main()
{
 int a,r=0,s=0,k=0;
 scanf("%d",&a);
 while(a!=0)
 {
     r=a%10;
     s=r*r;
     k=k+s;
     a=a/10;
 }
 printf("%d",k);
   return 0;
}
