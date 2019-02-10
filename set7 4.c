#include <stdio.h>

int main()
{
    int a,n,m;
    scanf("%d %d",&n,&m);
    a=n+m;
    if(a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
