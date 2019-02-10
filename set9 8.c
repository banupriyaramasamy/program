#include <stdio.h>
int main()
{
    int a,b,g=0;

scanf("%d %d",&a,&b);
g=(a<b)?a:b;
while(1)
{
    if(g%a==0 && g%b==0)
    {
        printf("%d",g);
        break;
    }
    g++;
}
return 0;
}
