#include <stdio.h>

int main()
{
    char b[10],a[10];
    int i,j,n=0,n1=0,k=0,k1=0;
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
      for(j=i+1;a[j]!='\0';j++)
      {
          if(a[i]==a[j])
          {
              n++;
          }
           if(a[j]==a[j+1])
          {
              k++;
          }
      }
    }for(i=0;b[i]!='\0';i++)
    {
      for(j=i+1;b[j]!='\0';j++)
      {
          if(b[i]==b[j])
          {
              n1++;
          }
           if(b[j]==b[j+1])
          {
              k1++;
          }
      }
    }
    if(n==1 && k==1 && n1==1 && k1==1)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }

    return 0;
}
