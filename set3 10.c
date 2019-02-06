#include <stdio.h>

int main()
{
    int i,j,k,l,h,m,p,q,ansr;
    scanf("%d %d",&i,&j);
    scanf("%d %d",&k,&l);
    h=(i*60)+j;
    m=(k*60)+l;
    if(m>h)
    {
      ansr=m-h;  
    }
    else
    {
        ansr=h-m;
    }
    p=ansr/60;
    q=ansr%60;
    printf("%d %d",p,q);

    return 0;
}

