#include <stdio.h>
int main()
{
    int n,m,i;
    for(i=1;i<=3;i++)
    {
    scanf("%d %d",&n,&m);
    if(n>m)
    {
        printf("%d",n-m);
    }
    else
    {
        printf("%d",m-n);
    }
    }

    return 0;
}
