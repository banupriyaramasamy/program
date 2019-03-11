#include <stdio.h>

int main()
{
    char a[1000],b[100];
    int i,j,m,n,c=0,s=0,k;
    scanf("%[^\n]s",a);
    scanf("%s",b);
    m=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            k=i+1;
            s=0;
            for(j=0;j<m;j++)
            {
                if(a[k]==b[j])
                {
                    s++;
                }
                k++;
            }
            if(s==1)
            {
                c++;
            }
            
        }
    }
    s=0;
    for(i=0;i<=m;i++)
    {
      if(a[i]==b[i])
      {
          s++;
      }
    }
    if(s==1  && a[m]==' ')
    {
        c++;
        }
    printf("%d",c);
    return 0;
}
