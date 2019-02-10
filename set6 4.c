#include <stdio.h>

int main()
{
    int a,r=0;
    scanf("%d",&a);
    if(a %2==0)
    {
        r=a-2;
    }
    else
    {
        r=a-1;
    }
    printf("%d",r);
    
    return 0;
}
