#include <stdio.h>
#include <stdlib.h>

void przepisz_zawartosc(int const *a, int * const b)
{
   *b = *a;
}

int main()
{
    int x=4,y=9;
    printf("%d %d\n",x, y);
    przepisz_zawartosc(&x, &y);
    printf("%d %d\n",x, y);
    return 0;
}
