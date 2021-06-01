#include <stdio.h>
#include <stdlib.h>

int dlugosc(char* napis)
{
    int i =0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}

void usun(char* napis)
{
    for(int i=0; i<dlugosc(napis); i++)
    {
        if(i%2==1)
        {
            napis[i]=' ';
        }

    }
    return napis;
}


int main()
{
    char imie[]="Wojciech";
    printf("%s\n", imie);
    usun(imie);
    printf("%s\n", imie);

    return 0;
}
