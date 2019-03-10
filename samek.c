#include <stdio.h>

int main()
{
  int a[50];
  int i,n,k,c=0,c1=0,j,t;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      if(a[i]==k)
      {
          t=1;
      }
  }
  if(t==1)
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
  
  

    return 0;
}
