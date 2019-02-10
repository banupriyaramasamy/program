#include <stdio.h>
int main()
{
    int n,m,a[10];
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
        {
        while(i==m)
        {
            printf("%d",a[i]);
        }
    }
    
return 0;
}
