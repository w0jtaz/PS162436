#include <stdio.h>
#include <stdlib.h>

int foo(int k)
{
    if (k==0)
    {
        return 1;
    }
    if (k==1)
    {
        return 2;
    }
    if (k==2)
    {
        return -2;
    }
    if (k%2!=0)
    {
        return 2*foo(k);
    }
    if (k%2==0)
    {
        return foo(2*k)-1;
    }
    return foo(3*k+1);
}


int main()
{
    printf("%d\n",foo(0));
    printf("%d\n",foo(1));
    printf("%d\n",foo(2));
    printf("%d\n",foo(3));
    printf("%d\n",foo(4));
    return 0;
}
