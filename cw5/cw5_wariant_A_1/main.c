#include <stdio.h>
#include <stdlib.h>


int foo(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    int a, b;
    printf("Podaj liczbe a: ");
    scanf("%d", &a);
    printf("Podaj liczbe b: ");
    scanf("%d", &b);

    foo(&a, &b);
    printf("Wartosc a: ");
    printf("%d\n", a);
    printf("Wartosc b: ");
    printf("%d\n", b);
    return 0;
}
