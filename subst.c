#include <stdio.h>

int main()
{char a[50],b[50];
int m,n,i,j,c=0;
scanf("%s %s",a,b);
m=strlen(a);
n=strlen(b);
i=m-n;
j=0;
while(i<m && j<n)
{
    if(a[i]==b[j])
    {
        c++;
    }
    i++;
    j++;
}
if(c==n)
{
    printf("yes");
}
else
{
    printf("no");
}
return 0;
}
