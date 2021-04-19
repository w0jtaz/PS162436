#include <stdio.h>
#include <stdlib.h>

int dlugosc_char(char* napis)
{
    int i =0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}

int dlugosc_wchar_t(wchar_t*napis)
{
    if (napis[0]==0)
    {
        return 0;
    }
    return dlugosc_wchar_t(++napis)+1;

}

int main()
{
    char tablica[]="programowanie";
    wchar_t tablica2[]=L"programowanie";
    printf("%d\n",dlugosc_char(tablica));
    wprintf(L"%d\n",dlugosc_wchar_t(tablica2));
    return 0;
}
