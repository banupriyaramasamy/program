#include<stdio.h>
#include<mat.h>
void main()
{
 int n,count=0,r,sum=0,n3,n2;
 scanf("%d",&n);
 n2=n3=n;
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
 if(sum==n)
 {
     printf("Yes");
 }
 else
 {
     printf("No");
 }
 return 0;
}
