#include <stdio.h>

int main()
{
    int a[10],i,n,min=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]<m)
    {
        m=min;
        m=a[i];
    }
    }
    printf("%d",m);
    return 0;
}
