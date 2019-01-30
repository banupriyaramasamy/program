#include<stdio.h>
int main()
{
 long int a[10],n,i,j,temp;
scanf("%ld",&n);
for(i=0;i<n;i++)
{
    scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
{
    for(j=i;j<n;j++)
    {
    if(a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        
    }
    }
}
for(i=0;i<n;i++)
{
    printf("%ld\t",a[i]);
}
return 0;
}
