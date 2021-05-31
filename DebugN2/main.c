#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="WOJCIECH"; //tu trzeba wpisac swoje imie, wszystkie litery duze
    char z = *(napis+2); //z=74 'J'
    int a = napis[3]; // a=67   ,z=74 'J'
    z++; // a=67   ,z=75 'K'
    ++a; // a=68   ,z=75 'K'
    z=(a-=2)+3; // a=66   ,z=69 'E'
    a=a^4; // a=70   ,z=69 'E'
    return 0;
}
