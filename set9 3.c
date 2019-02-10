#include <stdio.h>
int main()
{
    int n,m;
    char i;
    for(i=1;i<4;i++)
    {
    scanf("%d %d %s",&n,&m,i);
    if(i=='/')
    {
        printf("%d",n/m);
    }
    else
    {
        printf("%d",n%m);
    }
    }

    return 0;
}
