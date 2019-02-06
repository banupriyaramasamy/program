#include<stdio.h>
int main()
{
    int a,b,a1,b1,hr,min,t,t1,ans;
    scanf("%d%d",&a,&b);
    scanf("%d%d",&a1,&b1);
    hr=(a*60)+b;
    min=(a1*60)+b1;
    if(min>hr)
    {
        ans=min-hr;
    }
    else
    {
        ans=hr-min;
    }
    t=ans/60;
    t1=ans%60;
    printf("%d %d",t,t1);
    return 0;
}
