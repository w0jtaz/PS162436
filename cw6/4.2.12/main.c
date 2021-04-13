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

void fooD(int n, int tab[])
{
	int i, j, temp;
	for (i = 0; i<n-1; i++)
    {
        for (j=0; j<n-1-i; j++)
        {
            if (tab[j] > tab[j+1])
            {
                temp = tab[j+1];
                tab[j+1] = tab[j];
                tab[j] = temp;
            }
        }
    }
}
void fooE(int n, int tab[])
{
	int i, j, temp;
	for (i = 0; i<n-1; i++)
    {
        for (j=0; j<n-1-i; j++)
        {
            if (tab[j] < tab[j+1])
            {
                temp = tab[j+1];
                tab[j+1] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

int main()
{
    int tab[5] = {1,2,3,4,5};
    wyswietl(5, tab);
    fooA(5, tab);
    wyswietl(5, tab);
    printf("\n");

    fooB(5, tab);
    wyswietl(5, tab);
    fooC(5, tab);
    wyswietl(5, tab);
    printf("\n");

    int tab1[5] = {5,1,3,4,2};
    wyswietl(5, tab1);
    fooD(5, tab1);
    wyswietl(5, tab1);
    printf("\n");

    int tab2[5] = {1,5,3,2,4};
    wyswietl(5, tab2);
    fooE(5, tab2);
    wyswietl(5, tab2);

    return 0;
}
