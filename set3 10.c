#include <stdio.h>

int main()
{
    int a,b,c,d,h,m,p,q,ans;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    h=(a*60)+b;
    m=(c*60)+d;
    if(m>h)
    {
      ans=m-h;  
    }
    else
    {
        ans=h-m;
    }
    p=ans/60;
    q=ans%60;
    printf("%d %d",p,q);

    return 0;
}
