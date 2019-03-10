#include <stdio.h>

int main()
{
  int a[50][50];
  int i,n,k,c=0,c1=0,j,t;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
      scanf("%d",&a[i][j]);
      }
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
      if(a[i][j]==1)
      {
          if(a[i-1][j]==0 && a[i+1][j]==0 && a[i][j-1]==0 && a[i][j+1])
          {
          t++;
      }
  }
      }
  }
      printf("%d",t);
  
  

    return 0;
}
