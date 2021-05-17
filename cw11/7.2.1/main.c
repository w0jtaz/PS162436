#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct trojkat
{
    double a, b, c;
};

double obwod(struct trojkat t)
{
    return t.a+t.b+t.c;
}
double pole(struct trojkat t)
{
    return sqrt((t.a+t.b+t.c)*(t.a+t.b-t.c)*(t.a-t.b+t.c)*(-t.a+t.b+t.c))/4;
}
int czy_trojkat(struct trojkat t)
{
    if(t.a+t.b>t.c && t.a+t.c>t.b && t.b+t.c>t.a)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    struct trojkat t1;
    t1.a =3;
    t1.b =4;
    t1.c =5;
    printf("Obwod: %f\n", obwod(t1));
    printf("Pole: %f\n", pole(t1));
    printf("Podane boki tworza trojkat: %d", czy_trojkat(t1));
    return 0;
}
