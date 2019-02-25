#include <stdio.h>

int main()
{int b[10];
int i,j,c=0,a;
scanf("%d",&a);
for(i=0;i<a;i++)
{
    scanf("%d",&b[i]);
}
    for(i=0;i<a;i++)
{
    c=0;
    for(j=0;j<a;j++)
    {
        if(b[i]==b[j] && i!=j )
        {
        c=c+1;
        }
}

if(c==0)
{
    printf("%d",b[i]);
}
}

    

    return 0;
}
