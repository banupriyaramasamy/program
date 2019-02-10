#include <stdio.h>
int main()
{
    
    int n,i,m,k=0,j=0;
    scanf("%d %d",&n,&m);
    k=n*m;
    for(i=1;i<=(k/2);i++)
    {
    if(i*i==k)
    {
        j++;
    }
    }
    if(j==1)
    {
    printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
