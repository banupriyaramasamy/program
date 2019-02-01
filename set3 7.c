#include <stdio.h>

int main()
{
    char c[100];
    int i,k=0,g=0;
    scanf("%[^\n]s",c);
    for(i=0;c[i]!=NULL;i++)
    {
        g++;
    }
    for(i=0;c[i]!=NULL;i++)
    {
        if((c[i]>='0') && (c[i]<='9'))
        {
            k++;
        }
        if(c[i]=='.')
        {
            k++;
        }
    }
    if(k==g)
    {
        printf("yes");
        }
        else
        {
            printf("No");
        }
    return 0;
}
