#include <stdio.h>

int main()
{
 long int a,b;
 scanf("%ld %ld",&a,&b);
 a=a-b;
 b=a+b;
 a=b-a;
    printf("%ld %ld",a,b);
    return 0;
}

