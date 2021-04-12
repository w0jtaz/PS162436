#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m, int k)
{
    if(m % n == 0 && m % k == 0)
    {
        return 2;
    }
    if(m % n == 0 || m % k == 0)
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
    printf("%d\n", foo(3,5,3));
    printf("%d\n", foo(2,8,4));
    printf("%d\n", foo(2,8,3));
    return 0;
}
