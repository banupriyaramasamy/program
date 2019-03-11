#include <stdio.h>

int main()
{
    char a[1000],b[1000];
    int i,j,m,n,c=0;
    scanf("%s %s",a,b);
    m=strlen(a);
    n=strlen(b);
    for(i=0;i<m;i++)
    {c=0;
        for(j=0;j<n;j++)
        {
            if(m==n)
            {
              if(a[i]==b[j])
              {
                  c=1;
              }
            }
            else
            {
                printf("no");
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
