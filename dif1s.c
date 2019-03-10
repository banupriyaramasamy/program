#include <stdio.h>

int main()
{
    char a[10000],b[10000];
  int i,j,k,n,n1,m=0;
  scanf("%s",a);
  scanf("%s",b);
  scanf("%d",&k);
  n=strlen(a);
  n1=strlen(b);
  if(n==n1)
  {
  for(i=0;i<n;i++)
  {
        if(a[i]!=b[i])
        {
          m++;  
        }
      }
  if(m==k)
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
}
  else
  {
      printf("no");
  }

    return 0;
}
