#include<stdio.h>
int main()
{
    int n,hrs,mins;
    scanf("%d",&n);
    hrs=n/60;
    mins=n%60;
    printf("%d %d",hrs,mins);
    return 0;
}
    
