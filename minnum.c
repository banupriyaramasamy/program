#include <stdio.h>

int main()
{
    int a,i,j,c,k=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c=a/i;
        if(c%2==1)
        {
            printf("%d",i);
        break;
        }
        }
    }
    
    //printf("%d",k);

    return 0;
}
