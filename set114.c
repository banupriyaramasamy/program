#include <stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    c=b;
    while(b!=0)
    {
        a=a*10;
        b /=10;
    }
    printf("%d",a+c);
 return 0;
}
