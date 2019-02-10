#include <stdio.h>
int main()
{
    int n,r=0,t=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        t=(t*10)+r;
        n=n/10;
    }
    n=t;
    while(n!=0)
    {
        r=n%10;
        if(r%2==1)
        {
        printf("%d",r);
        }
        n=n/10;
    }

    return 0;
}
