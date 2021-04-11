#include <stdio.h>
#include <stdlib.h>

void foo(int *tab)
{
    free(tab);
}

int main()
{
    int tab1[5] = {1,2,3,4,5};
    printf("%d\n", *tab1);//zwraca
    printf("%x\n", &tab1);//zwraca
    foo(tab1);
    printf("%d\n", *tab1);//nic nie zwraca, pamiêæ zwolniona
    printf("%x\n", &tab1);//nic nie zwraca, pamiêæ zwolniona
    return 0;
}
