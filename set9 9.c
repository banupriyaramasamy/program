#include <stdio.h>
int main()
{
    char a[20],m[20];
    int i,j,k;

scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
    for(j=i+1;a[i]!='\0';j++)
    {
        if(a[i]==a[j])
        {
            m[k]=a[i];
            a[i]=a[j];
            a[j]=m[k];
        }
    }
}
printf("%d",a);
return 0;
}
