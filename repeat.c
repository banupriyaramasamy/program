#include <stdio.h>

int main()
{
    char a[10],b[10];
    int i,j,c=0,k,z;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(a[i]==a[j])
            {
              b[k]=a[i]; 
            }
        }
    }
     printf("%s",b);
return 0;
}
