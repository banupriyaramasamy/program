#include <stdio.h>

int main()
{
    int a[10],n,i,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[0];
    for(i=0;i<n;i++)
    {
            m=(m)|(a[i]);
    }
    printf("%d",m);

    return 0;
}
