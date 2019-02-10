#include <stdio.h>

int main()
{
    int a,t,r=0;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        t=t+r;
        a=a/10;
    }
    printf("%d",t);
    
    return 0;
}
