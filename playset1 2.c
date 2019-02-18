#include <stdio.h>
#include<string.h>
int main()
{
    int c,i,fact=1;
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}
