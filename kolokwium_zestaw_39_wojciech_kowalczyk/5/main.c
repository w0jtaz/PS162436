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
    int pom1[n]; int pom2[n];
    for(int i=0; i<n; i++)
    {
        if(i%2==0) //zak³adam w tym zadaniu ¿e zero jest parzyste
        {
            pom1[i] = tab1[i];
            pom2[i] = tab2[i];
            tab2[i] = tab1[i];
            tab1[i] = pom2[i];
        }

    }
}

int main()
{
    int tab1[5] = {1,2,3,4,5};
    int tab2[5] = {2,4,6,8,10};
    wyswietl(5,tab1);
    wyswietl(5,tab2);
    foo(5, tab1, tab2);
    printf("\n");
    wyswietl(5,tab1);
    wyswietl(5,tab2);
    printf("\n");

    printf("\n");
    printf("\n");
    int tab3[6] = {-12,-6,0,8,12,-3};
    int tab4[6] = {7,2,62,6,-32,1};
    wyswietl(6,tab3);
    wyswietl(6,tab4);
    foo(6, tab3, tab4);
    printf("\n");
    wyswietl(6,tab3);
    wyswietl(6,tab4);
    return 0;
}
