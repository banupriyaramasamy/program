#include <stdio.h>
int main()
{
    char a[10];
    int n=0;
    scanf("%s",a);
    n=strlen(a);
    if(n%2==0)
    {
        a[n/2]='*';
        a[n/2-1]='*';
    }
    else
    {
        a[n/2]='*';
    }
    printf("%s",a);
    return 0;
}
