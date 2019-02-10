#include <stdio.h>
int main()
{
    int n,r=0,i;
    scanf("%d ",&n);
    
    for(i=2;i<n/2;i++)
    {if(n%i==0)
    {r=1;
        break;
    }
    if(r==0)
    {
    
            printf("N0");
    }
    else
    {
        pritf("Yes");
    }
    
return 0;
}
