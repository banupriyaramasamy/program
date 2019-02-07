#include <stdio.h>

int main()
{
 long int a,b;
 scanf("%ld %ld",&a,&b);
 a ^=b;
 b ^=a;
 a ^=b;
    printf("%ld %ld",a,b);
    return 0;
}
