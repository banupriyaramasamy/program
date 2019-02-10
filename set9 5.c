#include <stdio.h>
int main()
{
    char n[20];
    int m=0,i;
    scanf("%s",n);
    m=strlen(n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%c",n[i]);
        }
    }
    printf(" ");
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
            printf("%c",n[i]);
        }
    }
    
    printf("%d",n);

    return 0;
}
