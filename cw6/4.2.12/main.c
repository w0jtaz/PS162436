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

int fooA(int n, int tab[n])
{
    int temp;
    for(int i=0; i<n/2; i++)
    {
        temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i]=temp;
    }
}

int fooB(int n, int tab[n])
{
    int temp = tab[0];
    for(int i=0; i<n-1; i++)
    {
        tab[i] = tab[i+1];
        tab[n-1]=temp;
    }
}

int fooC(int n, int tab[n])
{
    int temp = tab[n-1];
    for(int i=n-2; i>=0; i--)
    {
        tab[i+1]= tab[i];
        tab[0]=temp;
    }
}

int main()
{
    int tab[5] = {1,2,3,4,5};
    wyswietl(5, tab);
    printf("\n");
    fooA(5, tab);
    wyswietl(5, tab);
    printf("\n");
    fooB(5, tab);
    wyswietl(5, tab);
    printf("\n");
    fooC(5, tab);
    wyswietl(5, tab);

    return 0;
}
