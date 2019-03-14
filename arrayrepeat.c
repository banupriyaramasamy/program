#include <stdio.h>

int main()
{
     int n,a[10],k=1,i,j,fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=1;
        for(j=1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                k=k+1;;
            }
        }
    }
    printf("%d",k);

    return 0;
}
