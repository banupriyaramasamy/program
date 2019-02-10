#include <stdio.h>
int main()
{
    char n[20];
    int m=0,i;
    scanf("%s",n);
    for(i=0;n[i]!='\0';i++)
    {
        if(n[i]==n[i+1])
        {
            m=1;
        }
    }
        if(m==1)
        {
            printf("No");
        }
        else{
    
    printf("Yes");
        }

    return 0;
}
