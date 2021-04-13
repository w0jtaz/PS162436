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
}

int fooB(int n, int tab4[n], int tab5[n], int tab6[n])
{
    for(int i=0; i<n; i++)
    {
        if(tab4[i]>tab5[i])
        {
            tab6[i] += tab4[i];
        }
        else
        {
            tab6[i] += tab5[i];
        }
    }
}

int fooC(int n, int tab7[n], int tab8[n], int tab9[n])
{
    int pom7[n]; int pom8[n]; int pom9[n];
    for(int i=0; i<n; i++)
    {
        pom7[i] = tab7[i];
        pom8[i] = tab8[i];
        pom9[i] = tab9[i];
        tab8[i] = tab7[i];
        tab9[i] = pom8[i];
        tab7[i] = pom9[i];
    }
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
    wyswietl(5,tab3);
    printf("\n");

    int tab4[5] = {1,8,3,2,15};
    int tab5[5] = {2,4,13,8,10};
    int tab6[5] = {0,0,0,0,0};
    wyswietl(5,tab4);
    wyswietl(5,tab5);
    wyswietl(5,tab6);
    fooB(5, tab4, tab5, tab6);
    wyswietl(5,tab6);
    printf("\n");

    int tab7[5] = {1,2,3,4,5};
    int tab8[5] = {2,4,6,8,10};
    int tab9[5] = {0,0,0,0,0};
    wyswietl(5,tab7);
    wyswietl(5,tab8);
    wyswietl(5,tab9);
    fooC(5, tab7, tab8, tab9);
    printf("\n");
    wyswietl(5,tab7);
    wyswietl(5,tab8);
    wyswietl(5,tab9);

    return 0;
}
