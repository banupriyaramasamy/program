#include <stdio.h>

int main()
{
    int a[10],n,i,j,m,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            m=(a[i] &a[j]);
            if(m>max)
            {
                max=m;
            }
        }
    }
    printf("%d",max);

    return 0;
}
