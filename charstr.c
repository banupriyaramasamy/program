#include <stdio.h>

int main()
{
    char a[50];
    int i,n;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='x')
        {
        a[i]='a';
        }
        else if(a[i]=='y')
        {
        a[i]='b';
        }
        else if(a[i]=='z')
        {
        a[i]='c';
        }
        else
        a[i]=a[i]+3;
    }
    printf("%s",a);

    return 0;
}
