#include <stdio.h>

 int main()
{
  char a[1000];
  int i,n,k=0,j;
  scanf("%[^\n]s",a);
  for(i=0;a[i]!='\0';i++)
  {k=0;
      for(j=i+1;a[j]!='\0';j++)
      {
          if(a[i]==a[j] || a[i]==a[j]+32 || a[i]==a[j]-32)
          {
              k++;
              a[j]='$';
          }
      }
      if(k==0)
      {
      if(a[i]!=' ' && a[i]!='$')
      {
          printf("%c",a[i]);
      }
  }
  
  }

    return 0;
}

