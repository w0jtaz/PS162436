#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kwadrat, prostokat1, prostokat2, trojkat1, trojkat2;
    int figura;
    printf("kwadrat --> 1\nprostokat --> 2\ntrojkat --> 3\nPodaj figure do policzenia pola: ");
    scanf("%d", &figura);
    if (figura == 1)
        {
            printf("Podaj bok kwadratu: ");
            scanf("%f", &kwadrat);
            printf("Pole: ""%f", kwadrat*kwadrat);
        }
    if (figura == 2)
        {
            printf("Podaj pierwszy bok prostokata: ");
            scanf("%f", &prostokat1);
            printf("Podaj drugi bok prostokata: ");
            scanf("%f", &prostokat2);
            printf("Pole: ""%f", prostokat1*prostokat2);
        }
    if (figura == 3)
        {
            printf("Podaj bok trojkata: ");
            scanf("%f", &trojkat1);
            printf("Podaj wysokosc trojkata: ");
            scanf("%f", &trojkat2);
            printf("Pole: ""%f", (trojkat1*trojkat2)/2);
        }
    else
        {
            printf("Podane niewlasciwe dane!");
        }

    return 0;
}
