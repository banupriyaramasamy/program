#include <stdio.h>
int main()
{
    int l,b,h,v,t;
    scanf("%d %d %d",&l,&b,&h);
    v=l*b*h;
    t=2*((l*b)+(b*h)+(l*h));
    printf("%d",v);
    printf("%d",t);
return 0;
}
