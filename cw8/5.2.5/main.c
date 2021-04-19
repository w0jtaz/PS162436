#include <stdio.h>
#include <stdlib.h>

void przepisz1(char *napis1, char *napis2)
{
    int i;
    for(i=0; napis1[i]!=0;i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]=0;
}

void przepisz2(wchar_t *napis3, wchar_t *napis4)
{
    int i;
    for(i=0; napis3[i]!=0;i++)
    {
        napis4[i]=napis3[i];
    }
    napis4[i]=0;
}

int main()
{
    char napis1[] ="napis1";
    char napis2[] ="napis2";
    printf("%s\n", napis1);
    printf("%s\n", napis2);
    przepisz1(napis1, napis2);
    printf("%s\n", napis1);
    printf("%s\n", napis2);

    printf("\n");
    wchar_t napis3[] =L"napis3";
    wchar_t napis4[] =L"napis4";
    wprintf(L"%s\n", napis3);
    wprintf(L"%s\n", napis4);
    przepisz2(napis3, napis4);
    wprintf(L"%s\n", napis3);
    wprintf(L"%s\n", napis4);
    return 0;
}
