#include <stdio.h>

int main()
{
    int a,i,j,c=0,x;
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            c=0;
            x=i;
            for(j=1;j<=x;j++)
            {
            if(x%j==0)
            {
                c++;
    
            }
            }
            if(c==2)
            {
                printf("%d ",i);
            }
        }
        
    }
    return 0;
}
