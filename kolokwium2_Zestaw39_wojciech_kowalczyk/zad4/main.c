#include <stdio.h>
#include <stdlib.h>

void foo(char b, int a, int *tab[][a])
{
    return 10;
}
int main()
{
    char napis="tekst";
    int tablica[2][2];
    foo(napis, 5, tablica);



    return 0;
}
