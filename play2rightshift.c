#include <stdio.h>
int main()
{
 int n,k=0,a[10],i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
     {
      if(i%2!=0)
      {
          k=a[i];
          a[i]=a[i-1];
          a[i-1]=k;
      }
     }
     for(i=0;i<n;i++)
     {
 printf("%d",a[i]);
     }
   return 0;
}

