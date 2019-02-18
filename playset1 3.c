#include <stdio.h>
#include<string.h>
int main()
{
    int c,s=0,r;
    scanf("%d",&c);
    while(c)
    {
        r=c%10;
        s=(s*10)+r;
        c=c/10;
    }
    printf("%d",s);
    return 0;
}
