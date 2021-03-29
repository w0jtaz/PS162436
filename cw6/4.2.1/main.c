#include <stdio.h>
#include <stdlib.h>

void fooA(int n, int tab[n])
{
    for(int i=0; i<n; i++)
    {
        tab[i] = 0;
    }
}

void fooB(int n, int tab[n])
{
    for(int i=0; i<n; i++)
    {
        tab[i] = i;
    }
}

void fooC(int n, int tab[n])
{
    for(int i=0; i<n; i++)
    {
        tab[i] *= 2;
    }
}

void fooD(int n, int tab[n])
{
    for(int i=0; i<n; i++)
    {
        tab[i] = abs(tab[i]);
    }
}

//funkcja na wyswietlanie elementow tablicy
void wyswietl(int n, int tab[n])
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",tab[i]);
    }
    printf("\n");
}
int main()
{
    int tab1[3] = {3,6,10};
    wyswietl(3, tab1);
    fooA(3, tab1);
    wyswietl(3, tab1);

    printf("\n");

    int tab2[3] = {1,2,3};
    wyswietl(3, tab2);
    fooB(3, tab2);
    wyswietl(3, tab2);

    printf("\n");

    int tab3[3] = {4,7,12};
    wyswietl(3, tab3);
    fooC(3, tab3);
    wyswietl(3, tab3);

    printf("\n");

    int tab4[3] = {-32,-2,-5};
    wyswietl(3, tab4);
    fooD(3, tab4);
    wyswietl(3, tab4);

    return 0;
}
