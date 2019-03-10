#include <stdio.h>

int main()
{
    int a,b=0,c,i;

    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%1==0)
        {
            b=1;
            break;
        }
    }
    if(b==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
return 0;
}
