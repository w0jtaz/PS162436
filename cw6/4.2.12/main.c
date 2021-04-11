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

int main()
{
    int tab[5] = {1,2,3,4,5};
    wyswietl(5, tab);
    fooA(5, tab);
    wyswietl(5, tab);

    return 0;
}
