#include <stdio.h>

int main()
{
    int a,b,c,i;

    scanf("%d",&a);
    if(a>=-32768 && a<=32767)
    {
        printf("INT");
    }
    else
    {
        printf("LONG");
    }
return 0;
}
