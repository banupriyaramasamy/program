#include <stdio.h>

int main()
{
    char a[1000],b;
    int i,j,m,n,c=0;
    scanf("%s %c",a,&b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
