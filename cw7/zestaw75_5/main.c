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

void sortuj(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if (tab[j]<tab[j+1])
            {
                int temp=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=temp;
            }
        }
    }
}

int *foo(int n, int tab1[], int tab2[])
{
    int *temp=malloc(2*n*sizeof(n));
    for(int i=0;i<n;i++)
    {
        temp[i]=tab1[i];
        temp[i+n]=tab2[i];
    }
    sortuj(2*n,temp);
    return temp;
}

int main()
{
    int tab1[5] = {5,1,3,4,2};
    int tab2[5] = {-2,-7,0,9,2};
    wyswietl(5, tab1);
    wyswietl(5, tab2);
    int *tablica_posortowana = foo(5, tab1, tab2);
    wyswietl(10, tablica_posortowana);
    return 0;
}
