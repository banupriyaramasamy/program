#include <stdio.h>

int main()
{
char a[10];
int i,k=0;
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
    if(a[i]!=' ')
    {
        k++;
    }
}
    printf("%d",k);
    return 0;
}
