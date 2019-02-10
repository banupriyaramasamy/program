#include <stdio.h>
int main()
{
    char n[20];
    int i,m=0,c=0;
    scanf("%s",n);
    m=strlen(n);
for(i=0;i<m;i++)
{
    if(n[i]==n[m-i-1])
    {
    c++;
    }
}
    if(c==m)
    {
    printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
