#include <stdio.h>

int main()
{
    char a[1000];
    int i,c,n;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
    if((a[i]>='a'&&a[i]<='z')|| (a[i]>='A &&a[i]<='Z'))
    {
        c=1;
    }
    else if(a[i]>='0' && a[i]<='9')
    
    {
        c=2;
    }
    else
    {
        c=0;
    }
    }
    if(c==1 && c==2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
return 0;
}
