#include <stdio.h>

int main()
{
    char a[50];
    int i,n;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
            }
       else if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
    }
    printf("%s",a);

    return 0;
}
