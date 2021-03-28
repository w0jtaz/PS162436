#include <stdio.h>
#include <stdlib.h>

void foo(int n, int *w)
{
    *w = n;
}

int main()
{
    int x=4,y=9;
    printf("%d %d\n",x, y);
    foo(x, &y);
    printf("%d %d\n",x, y);

    return 0;
}
