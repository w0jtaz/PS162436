#include <stdio.h>
#include <stdlib.h>

void *rezerwacja_pamieci()
{
    return malloc(sizeof(int));
}

int main()
{
    printf("%d\n", sizeof(int));
    printf("%p\n", rezerwacja_pamieci());
    return 0;
}

