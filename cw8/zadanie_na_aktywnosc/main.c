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

int dlugosc2(char*napis)
{
    if (napis[0]==0)
    {
        return 0;
    }
    return dlugosc2(++napis)+1;

}

int main()
{
    char tablica[]="programowanie";
    printf("%d\n",dlugosc(tablica));
    printf("%d\n",dlugosc2(tablica));
    return 0;
}
