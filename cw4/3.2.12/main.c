#include <stdio.h>
#include <stdlib.h>

void *rezerwacja_pamieci(unsigned int n)
{
    return malloc(n* sizeof(double));
}

int main()
{
    return 0;
}
