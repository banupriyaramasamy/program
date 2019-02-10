#include <stdio.h>
int main()
{
    char a[20];
    int i,n;

scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
    if(a[i]>'0' && a[i]<'9')
    {
        printf("%d",a[i]);
    }
}
return 0;
}
