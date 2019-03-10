#include <stdio.h>

int main()
{char a[50];
int m,n,i=0,j,c=0,temp,b;
scanf("%s %d",a,&b);
m=strlen(a);
while(b)
{
    temp=a[m-1];
for(i=m-1;i>0;i--)
{
    a[i]=a[i-1];
}
a[0]=temp;
b--;
}
    puts(a);
return 0;
}
