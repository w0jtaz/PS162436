#include <stdio.h>
#include <stdlib.h>

int fun(int* (f1)(float a), int* (f2)(float b), int c)
{
    return 10;
}

int main()
{
    printf("%d\n", fun(2,3,4));
    return 0;
}
