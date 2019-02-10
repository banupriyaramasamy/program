#include <stdio.h>

int main()
{
    char n[100];
    int i,s=0,m=0;

    scanf("%s",n);
    m=strlen(n);
    for(i=0;i<m;i++)
    {
if(n[i]=='1'||n[i]=='0' )
{
    s++;
}
}
if(s==m)
{
    printf("Yes");
    
}
else
{
    printf("No");
}
    return 0;
}
