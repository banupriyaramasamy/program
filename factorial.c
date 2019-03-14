#include <stdio.h>

int main()
{
     int n,a[10],k,i,j,fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      fact=fact*i;
    }
    printf("%d",fact);

    return 0;
}
