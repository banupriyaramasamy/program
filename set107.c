#include <stdio.h>
int main()
{
    int n,r=0,i;
    scanf("%d ",&n);
    
while(n!=0)
{
    r=n%10;
    i=(i*10)+r;
    n=n/10;
}
        printf("%d",i);
    
return 0;
}
