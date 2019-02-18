#include <stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int c=0,i,j;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    for(j=c-1;j>=0;j--)
    {
    printf("%c",a[j]);
    }
    return 0;
}

