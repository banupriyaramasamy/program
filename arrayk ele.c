#include <stdio.h>

int main()
{
     int n,a[10],k,i,j,t,m=1;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {m=1;
        for(j=1;j<n;j++)
        {
        if(a[i]==a[j])
        {
           m++;
        }
    }

    if(m==k)
    {
        printf("%d",a[i]);
        break;
    }
}

    return 0;
}
