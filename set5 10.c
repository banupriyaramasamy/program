#include <stdio.h>

int main()
{
    int a=1,b=2,c,i,k;
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {
    a=a*b;
    
    if(a==c)
    {
        k=1;
    }
    }
 if(k==1)
    {
    printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    return 0;
}
