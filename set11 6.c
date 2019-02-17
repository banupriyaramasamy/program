#include <stdio.h>

int main()
{
    int n,k,i,j,c=0;
    int a[100];
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a[k]);

    return 0;
}
