#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="Wojciech"; //tu trzeba wpisac swoje imie, pierwsza litera duza, reszta male
    char z = *(napis+2); //z=106 'j'
    int a = napis[3]; // a=99   ,z=106 'j'
    z++; // a=99   ,z=107 'k'
    ++a; // a=100   ,z=107 'k'
    z=(a-=2)+3; // a=98   ,z=101 'e'
    a=a^4; // a=102   ,z=101 'e'
    return 0;
}
