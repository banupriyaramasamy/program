#include <stdio.h>

int main()
{
    int n,k,i,j,c=0;
    char a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
{
    scanf("%c",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]!='a' || a[i]!='e' || a[i]!='i'|| a[i]!='o'|| a[i]!='u')
    {
        c++;
    }
}
for(j=c-1;j>=0;j--)
{
    printf("%c",a[j]);
}

    return 0;
}
