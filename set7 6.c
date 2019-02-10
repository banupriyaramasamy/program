#include <stdio.h>

int main()
{
    int a,b=0,i;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            b++;
        }
    }
    if(b==0)
    {
        printf("Yes");
    }
    else
    {
    printf("No");
    }
    return 0;
}
