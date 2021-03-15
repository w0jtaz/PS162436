#include <stdio.h>
#include <stdlib.h>

int potega(int n, int m) // n do potegi m
{
    int temp=1;
    for(int i=1;i<=m;i++)
    {
        temp*=n;
    }
    return temp;
}

int czesc_calk_pierw(int n,int m)
{
    int wynik=0;
    for(int i=0;potega(i,m)<=n;i++)
    {
        wynik=i;
    }
    return wynik;
}

int sumacc(int n, int m)
{
    int suma=0;
    for(int i=0;i<=n;i++)
    {
        suma+=czesc_calk_pierw(i,m);
    }
    return suma;
}

int main()
{
    printf("%d",sumacc(9,3));
    return 0;
}
