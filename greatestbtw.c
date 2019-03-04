#include<stdio.h>
#include<math.h>
void main()
{
 int n,m,i,k;
 scanf("%d %d",&n,&m);
 if(n>m)
 {
     k=n;
 }
 else
 {
     k=m;
 }
 for(i=k;i>=2;i--)
 {
 if(n%i==0 && m%i==0)
 {
    printf("%d",i);
 break;
 }
 }
     
 return 0;
}

 
