#include <stdio.h>

int main()
{
   char a[10],b[10];
   int n,i,j;
   scanf("%[^\n]",a);
   for(i=0;a[i]!='\0';i++)
   {
       if(i==0 || a[i-1]==' ')
       {
       if(a[i]>=97 && a[i]<=122)
       {
           a[i]=a[i]-32;
       }
   }
   }
printf("%s",a);

    return 0;
}
