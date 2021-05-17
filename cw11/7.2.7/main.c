#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct zespolone
{
    double re;
    double im;
};

struct zespolone dodaj(struct zespolone z1, struct zespolone z2)
{
    struct zespolone temp;
    temp.re=z1.re+z2.re;
    temp.im=z1.im+z2.im;
    return temp;
}
struct zespolone pomnoz(struct zespolone z1, struct zespolone z2)
{
    struct zespolone iloczyn;
    iloczyn.re=((z1.re*z2.re)+(z1.im*z2.im));
    iloczyn.im=((z1.im*z2.re)-(z1.re*z2.im));
    return iloczyn;
};

struct zespolone podziel(struct zespolone z1, struct zespolone z2)
{
    struct zespolone iloraz;
    iloraz.re=((z1.re*z2.re)+(z1.im*z2.im))/((pow(z2.re, 2)+pow(z2.im, 2)));
    iloraz.im=((z1.im*z2.re)-(z1.re*z2.im))/((pow(z2.re, 2)+pow(z2.im, 2)));
    return iloraz;
};

int main()
{
    struct zespolone liczba1={3,7};
    struct zespolone liczba2={8,2};
    struct zespolone suma=dodaj(liczba1, liczba2);
    struct zespolone iloczyn=pomnoz(liczba1, liczba2);
    struct zespolone iloraz=podziel(liczba1, liczba2);
    printf("%f+%fi\n",suma.re, suma.im);
    printf("%f+%fi",iloraz.re, iloraz.im);
    return 0;
}
