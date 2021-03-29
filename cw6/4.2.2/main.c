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

float fooA(int n, int tab[n])
{
    int temp = 0;
    for(int i=0; i<n; i++)
    {
        temp += tab[i];
    }
    return (float)temp/n;
}

int fooB(int n, int tab[n])
{
    int temp = 0;
    for(int i=0; i<n; i++)
    {
        temp += tab[i];
    }
    return temp;
}

int fooC(int n, int tab[n])
{
    int temp = 0;
    for(int i=0; i<n; i++)
    {
        temp += tab[i]*tab[i];
    }
    return temp;
}

int main()
{
    int tab1[5] = {6,2,3,4,5};
    wyswietl(5,tab1);
    printf("%d\n", fooB(5, tab1));
    printf("%f\n", fooA(5, tab1));
    printf("%d\n", fooC(5, tab1));

    return 0;
}
