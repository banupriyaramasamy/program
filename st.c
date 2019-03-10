#include <stdio.h>

 int main()
{
    int a;
  int i,n=0,j,k,c=0,rem;
  scanf("%d %d",&a,&k);
  while(a!=0)
  {
      rem=a%10;
      if(rem==k)
      {
          c++;
      }
      a=a/10;
  }
  printf("%d",c);
    return 0;
}
