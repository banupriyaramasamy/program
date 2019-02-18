#include <stdio.h>

int main()
{
    int n,k,a[100],min=0,i,j,l;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=n+1-k;
    for(i=0;i<k;i++)
    {
        min=0;
        for(j=0;j<n;j++)
        {
            if(a[j]>min)
            {
                min=a[j];
                l=j;
            }
        }
        a[l]='\0';
    }
    printf("%d",min);

    return 0;
}
