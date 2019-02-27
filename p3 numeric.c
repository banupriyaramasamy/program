#include <stdio.h>

int main()
{
    char a[10];
    int c,i,k=0;
    scanf("%s",a);
    c=strlen(a);
    for(i=0;i<c;i++)
    {
        if((a[i]>=65 && a[i]<=90)||(a[i]>=97 && a[i]<=122))
        {
            k=1;
        }
    }
    if(k==1)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}
