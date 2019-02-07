#include <stdio.h>

int main()
{
  char n[100],n1[100];
  int a=0,b=0;
 scanf("%s %s",&n,&n1);
 a=strlen(n);
 b=strlen(n1);
 if(a>b)
 {
     printf("%s",n);
 }
 else if(b>a)
 {
     printf("%s",n1);
 }
 else
 {
    printf("%s",n1);
 }
    return 0;
}



