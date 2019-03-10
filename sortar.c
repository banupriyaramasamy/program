#include <stdio.h>

int main()
{int a[50],k,i,j,t,f=0;
scanf("%d",&k);
for(i=0;i<k;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{f=0;
    for(j=i;j<k;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            f=1;
        }
    }
}
if(f==1)
{
    printf("no");
}
else
{
    printf("yes");
}
return 0;
}
