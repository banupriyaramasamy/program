#include <stdio.h>
int main()
{
    int n,a[10],m=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        m=m+i;
    }
    printf("%d",m);
return 0;
}
