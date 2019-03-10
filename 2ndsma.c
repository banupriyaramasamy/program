#include <stdio.h>

int main()
{
    int a[1000],b=0,c,i,n,min=0,t,j;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n+1-2;j++)
    {
        min=0;
        for(i=0;i<n;i++)
        {
            if(min<a[i])
            {
                min=a[i];
                t=i;
                
            }
        }
        a[t]='\0';
    }
    printf("%d",min);
return 0;
}
