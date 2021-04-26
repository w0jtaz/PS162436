#include <stdio.h>
#include <stdlib.h>

void sklej(char *napis1, char *napis2, char *napis3)
{
    int i, j;
    for(i=0; napis1[i]!=0;i++)
    {
        napis3[i]=napis1[i];
    }
    for(j=0; napis2[j]!=0;j++)
    {
        napis3[i+j]=napis2[j];
    }
    napis3[i+j]=0;
}

int main()
{
    char napis1[] ="Ala m";
    char napis2[] ="a kota";
    char napis3[] ="xzxzxzxzxzxz";
    printf("%s\n", napis1);
    printf("%s\n", napis2);
    printf("%s\n", napis3);

    printf("\n");
    sklej(napis1, napis2, napis3);
    printf("%s\n", napis3);
    return 0;
}
