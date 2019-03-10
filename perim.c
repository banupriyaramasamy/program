#include <stdio.h>

int main()
{int a;
int i,j,c=0,b,a1,b1;
scanf("%d %d",&a,&b);
for(i=0;i<a;i++)
{
    for(j=0;j<a;j++)
    {
        a1=2*(i+j);
        b1=i*j;
        if(a1==a && b1==b)
        {
            c=1;
        }
    }
}
if(c==1)
{
    printf("yes");
    
}
else
{
    printf("no");
}
return 0;
}
