#include <stdio.h>

int main()
{
    int i,c,n,a[20],k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&c);
    for(i=0;i<n;i++)
{
            if(a[i]==c)
            {
              k=1;
            }
        
    }
    if(k==1)
    {
    printf("Yes");
    }
    else
    {
        printf("No");
    }
return 0;
}
