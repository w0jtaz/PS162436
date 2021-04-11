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

int fooA(int n, int tab1[n], int tab2[n], int tab3[n])
{
    for(int i=0; i<n; i++)
    {
        tab3[i] += tab1[i]+tab2[i];
    }
    return tab3[n];
}

int main()
{
    int tab1[5] = {1,2,3,4,5};
    int tab2[5] = {2,4,6,8,10};
    int tab3[5] = {0,0,0,0,0};
    wyswietl(5,tab1);
    wyswietl(5,tab2);
    wyswietl(5,tab3);
    fooA(5, tab1, tab2, tab3);
    printf("\n");
    wyswietl(5,tab3);
    return 0;
}
