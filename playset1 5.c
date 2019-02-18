#include <stdio.h>
#include<string.h>
int main()
{
    char c[10],a[10];
    int n=0,i,r=0;
    scanf("%s",c);
    n=strlen(c);
    for(i=0;i<n;i++)
    {
        if(c[i]=='I'){
        a[i]=1;
        }
        else if(c[i]=='V')
        {
        a[i]=5;
        }
        else if(c[i]=='X')
        {
        a[i]=10;
        }
    }
    for(i=0;i<n;i=i+2)
    {
     if(a[i]<a[i+1])
     {
     r=a[i+1]-a[i];
     }
     else
     {
     r=a[i]+a[i+1];
     }
    }
    printf("%d",r);

    return 0;
}
