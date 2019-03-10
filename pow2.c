#include <stdio.h>

int main()
{int a,i,m=1,f=0,j;
scanf("%d",&a);
for(i=0;i<a;i++)
{
    for(j=i;j>0;j--)
    {
    m=m*2;
    if(m==a)
    {
        f=1;
        break;
    }
    }
}
if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }



    return 0;
}
