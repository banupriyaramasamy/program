#include <stdio.h>

int main()
{
    int n,k,i,a=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=k;i++)
    {
        a=n*i;
    }
    printf("%d",a);

    return 0;
}
