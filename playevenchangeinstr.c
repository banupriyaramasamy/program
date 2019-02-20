#include <stdio.h>
int main()
{
 char a[10];
 int k,n=0,i;
     scanf("%s",a);
     n=strlen(a);
 
      if(n%2==0)
      {
          for(i=0;i<n;i+=2)
     {
          k=a[i];
          a[i]=a[i+1];
          a[i+1]=k;
      }
 printf("%s",a);
     }
     else
     {
         for(i=0;i<n-1;i+=2)
     {
          k=a[i];
          a[i]=a[i+1];
          a[i+1]=k;
      }
 printf("%s",a);
     }  
     }
   return 0;
}

