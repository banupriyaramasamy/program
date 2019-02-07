#include <stdio.h>
int main()
{
  char n[100],n1[100];
  int i,j;
 scanf("%s %s",n,n1);
 for(i=0;n[i]!='\0';i++)
 {
 }
     for(j=0;n1[j]!='\0';j++)
     {
         n[i]=n1[j];
         i++;
     }
 n[i]='\0';
     printf("%s",n);
    return 0;
}
