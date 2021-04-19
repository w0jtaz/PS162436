#include <stdio.h>
#include <stdlib.h>

void przepisz(wchar_t *napis1, wchar_t *napis2)
{
    int i;
    for(i=0; napis1[i]!=0;i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]=0;
}

int main()
{
    wchar_t napis1[] =L"napis1";
    wchar_t napis2[] =L"napis2";
    wprintf(L"%s\n", napis1);
    wprintf(L"%s\n", napis2);
    printf("\n");
    przepisz(napis1, napis2);
    wprintf(L"%s\n", napis1);
    wprintf(L"%s\n", napis2);
    return 0;
}
