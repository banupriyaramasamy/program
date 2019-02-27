#include <stdio.h>

int main()
{
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        c=b;
    }
    else
    {
        c=a;
    }
    while(1)
    {
        if(c%a==0 && c%b==0)
        {
            printf("%d",c);
            break;
        }
        else
        {
            c++;
        }
    }

    return 0;
}
