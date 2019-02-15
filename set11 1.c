#include <stdio.h>
int main()
{
    char a[10];
    int k,i,l=0,p=0;
    scanf("%s",a);
    scanf("%d",&k);
    l=strlen(a);
    p=l-k;
    for(i=p;i<l;i++)
    {
    printf("%c",a[i]);
    }

    return 0;
}
