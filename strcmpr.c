#include <stdio.h>

int main()
{
    char a[1000],k[1000];
    int i,j,c=0;
    scanf("%s %s",a,k);
    for(i=0;a[i]!='\0';i++)
    {c=0;
        for(j=0;k[j]!='\0';j++)
        {
            if(a[i]==k[j])
            {
                c=1;
            }
        }
    }
    if(c==1)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }
    return 0;
}
