#include <stdio.h>
int main()
{
    char a[10];
    int i,l=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i==0 || a[i-1]==' ')
        {
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);

    return 0;
}
