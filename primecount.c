#include <stdio.h>

int main()
{
   int a,b,i,c=0,j,n=0;

   scanf("%d %d",&a,&b);
   for(i=a;i<=b;i++)
  {
      c=0;
      for(j=2;j<=(i/2);j++)
      {
      if((i%j)==0)
  {
      c=1;
      break;
  }
  else
  {
      c=0;
  }
  }
  
  if(c==0)
  {
      n++;
  }
}
      printf("%d",n);
  

    return 0;
}
