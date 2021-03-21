#include <stdio.h>
#include <stdlib.h>

int main()
{
    //wpisz wartosci zmiennych po wykonaniu danej linijki kodu
    int a = 162436; //tu wpisz swoj numer indeksu
    int b=a%12;
    int c=b%7;
    int d= (b+=4)-(c*=2); // b=8 , c=8  , d=0
    c=(d^=2); // b=8  , c=2  , d=2
    d=(b/=4)*(c-=3); // b=2  , c=-1  , d=-2
    return 0;
}
