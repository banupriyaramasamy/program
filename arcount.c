#include <stdio.h>

int main()
{
    int a[1000],k;
    int i,j,c=0,sum=0,m;
    scanf("%d %d",&k,&m);
    for(i=0;i<k;i++)
    {scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            sum=a[i]+a[j];
        
            if(sum==m)
            {
                c=1;
                break;
            }
        }
    }
    if(c==1)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }
    return 0;
}
