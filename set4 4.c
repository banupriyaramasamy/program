#include <stdio.h>

int main()
{
char b[10];
int i,k=0;
scanf("%[^\n]s",b);
for(i=0;b[i]!='\0';i++)
{
    if(b[i]=='.')
    {
        k++;
    }
}
    printf("%d",k+1);
    return 0;
}
