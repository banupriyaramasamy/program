#include <stdio.h>

int main()
{
    int l,r,i,j,m=0,n;
    scanf("%d %d",&l,&r);
    for(i=l;i<=r;i++)
    {
        for(j=2;j<=r;j++)
        {
        if(i==j*j)
        {
            m++;
        }
        
    }
    }
    printf("%d",m);
    return 0;
}

