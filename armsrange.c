#include<stdio.h>
#include<math.h>
void main()
{
 int n,count=0,r,sum=0,n3,n2,g,i;
 scanf("%d%d",&n,&g);
 for(i=n;i<g;i++)
 {
     n2=n3=i;
 while(n2>0)
 {
   
     count++;
     n2/=10;
 }
 while(n3>0)
 {
     r=n3%10;
     sum=sum+pow(r,count);
     n3/=10;
 }
 
 if(sum==i)
 {
     printf("%d\t",sum);
}

sum=0;
count=0;
}
return 0;
}
     
