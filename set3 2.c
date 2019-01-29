#include<stdio.h>
int main()
{
int a[10],n,i,max=0,j,z=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{max=0;
    scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
    if(a[j]>max)
    {
        max=a[j];
        z=j;
    }
    }
    a[z]=0;

    
    printf("%d",max);
return 0;
}
