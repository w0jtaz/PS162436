#include <stdio.h>
#include <stdlib.h>

int foo(int *a, int *b)
{
    if (*a<*b)
    {
        return a;
    }
    return b;
}

int main()
{
    int x = 66, y=7;
    printf("%p\n", foo(&x,&y));
    return 0;
}
