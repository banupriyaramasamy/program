#include <stdio.h>

int main()
{
    int a,b,c,i;
    float res;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2==1 && a%i==0)
        {
            printf("%d ",i);
            }
    }
    
return 0;
}
