#include <stdio.h>
#include <stdlib.h>

void *rezerwacja_pamieci(unsigned int n)
{
    return malloc(n* sizeof(double));
}

int main()
{
    int x=4;
    printf("%d\n", x);
    rezerwacja_pamieci(x);
    printf("%#010x\n", &x);
    return 0;
}
