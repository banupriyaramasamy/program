#include<stdio.h>
int main()
{
int a[10],n,i,min,j,z=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
    if(a[j]<min)
    {
        min=a[j];
        
    }
    }

    printf("%d",min);
return 0;
}
