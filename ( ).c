#include <stdio.h>

int main()
{
  char a[50];
  int i,n,c=0,c1=0;
  scanf("%s",a);
  n=strlen(a);
  for(i=0;a[i]!='\0';i++)
  {
      if(a[i]=='(')
      {
          c++;
      }
      else if(a[i]==')')
      {
          c1++;
      }
  }
  if(c==c1)
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
  

    return 0;
}
