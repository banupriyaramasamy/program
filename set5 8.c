#include <stdio.h>

int main()
{
    int n,a[10],i,tot=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        tot=tot+a[i];
        s=tot/n;
    }
    printf("%d",s);
    return 0;
}
