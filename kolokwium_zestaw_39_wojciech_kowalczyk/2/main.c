#include <stdio.h>
#include <stdlib.h>

int foo1(int n)
{
int i, pierw = 0;
    for(i=0; i<=n; i++)
    {
        if(i*i<=n)
        {
            pierw=n;
        }
        return pierw;
    }
}

int foo(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(foo1(n)>=n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    printf("%d\n", foo(4));
    printf("%d\n", foo(5));
    return 0;
}
