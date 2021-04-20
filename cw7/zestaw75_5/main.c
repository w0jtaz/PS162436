#include <stdio.h>
#include <stdlib.h>

void wyswietl(int n, int tab[n])
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",tab[i]);
    }
    printf("\n");
}

int foo(int n, int tab1[n], int tab2[n])
{
    int tab3[2*n];
    for(int i=0; i<n; i++)
    {
        tab3[i] += tab1[i];
        tab3[i+1] += tab2[i];
    }
    return *tab3;
}

int main()
{
    int tab1[5] = {5,1,3,4,2};
    int tab2[5] = {-2,-7,0,9,2};
    foo(5, tab1, tab2);
    wyswietl(5, foo(5, tab1, tab2));
    return 0;
}
