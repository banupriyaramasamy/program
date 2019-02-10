#include <stdio.h>

int main()
{
    int a,r=0,b;
    scanf("%d",&a);
    scanf("%d",&b);
    r=a*b;
    if(r %2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    
    return 0;
}
