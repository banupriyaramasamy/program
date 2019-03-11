#include <stdio.h>

int main()
{
    int a,b[50];
    int i,j,m,n,c=0,s=0,k;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++)
    {
      if(b[i]==0)
      {
          s=i;
      }
    }
    for(i=0;i<s;i++)
    {
    if(b[i]!=0)
    {
    printf("%d",b[i]);
    }
    }
    return 0;
}
