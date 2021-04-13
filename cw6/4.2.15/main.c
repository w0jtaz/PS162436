#include <stdio.h>
#include <stdlib.h>

void foo(int*tab)
{
    free(tab);
}

int main()
{
    int *tab = malloc(2*sizeof(int));
    *tab=4;
    *(tab+1)=3;
    *(tab+2)=5;
    printf("%p\n", tab);
    foo(tab);
    printf("%p\n", tab);

    return 0;
}
