#include <stdio.h>
#include <stdlib.h>


int foo(int **a, int **b)
{
    int *temp = *a;
    *a = *b;
    *b = *temp;


}

int main()
{
    int a, b;
    printf("Podaj liczbe a: ");
    scanf("%d", &a);
    printf("Podaj liczbe b: ");
    scanf("%d", &b);
    printf("Adres liczby a: ");
    printf("%p\n", &a);
    printf("Adres liczby b: ");
    printf("%p\n", &b);
    foo(&a, &b);
    printf("Adres liczby a: ");
    printf("%p\n", &a);
    printf("Adres liczby b: ");
    printf("%p\n", &b);
    return 0;
}
