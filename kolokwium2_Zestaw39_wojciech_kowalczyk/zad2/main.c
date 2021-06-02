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

void foo(char* napis1, char*napis2)
{
    for(int i=0; i<dlugosc(napis1); i++)
    {
        if(i%2==0)
        {
            napis1[i]=napis2[i];
        }

    for(int j=0; j<dlugosc(napis2); j++)
    {
        if(j%2==0)
        {
            napis2[j]=napis1[j];
        }

    }
    return napis1, napis2;
}
}

int main()
{
    char napis1[]="statek";
    char napis2[]="rowery";
    printf("%s\n", napis1);
    printf("%s\n", napis2);
    foo(napis1, napis2);
    printf("%s\n", napis1);
    printf("%s\n", napis2);

    return 0;
}
