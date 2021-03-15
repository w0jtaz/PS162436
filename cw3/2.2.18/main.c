#include <stdio.h>
#include <stdlib.h>

float foo(int n)
{
    if (n==0)
        return 0.2;
    return 1-foo(n-1)*foo(n-1);
}

int main()
{
   printf("%f\n",foo(0));
   printf("%f\n",foo(1));
   printf("%f\n",foo(2));
   printf("%f\n",foo(3));



    return 0;
}
