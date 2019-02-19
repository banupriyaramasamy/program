#include <stdio.h>

int main()
{
 int n,k=0,a[10],i,j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
     for(j=1;j<n;j++)
     {
      if((j+1)%2==0)
      {
          k=a[i];
          a[i]=a[j];
          a[j]=k;
      }
     }
 }
     i++;
     for(i=0;i<n;i++)
     {
 printf("%d",a[i]);
     }
   return 0;
}
