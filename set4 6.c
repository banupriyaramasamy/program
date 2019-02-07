#include <stdio.h>

int main()
{
char b[1000];
int i,k=0,c;
scanf("%[^\n]s",b);
    c=strlen(b);
for(i=0;i<c;i++)
{
    if(b[i]=='!' || b[i]=='@' || b[i]=='#' || b[i]=='$' || b[i]=='^' || b[i]=='&' || b[i]=='_') 
    {
        k++;
    }
}
    printf("%d",k);
    return 0;
}
