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

void wytnij(char*napis,int n,int m)
{
    int dlug=dlugosc(napis);
    if (m<n)
        return;
    if (m<dlug)
    {
        for(int i=0;i+m<dlug;i++)
        {
            napis[i+n]=napis[m+1+i];
        }
    }
    else if (m>=dlug && n<=dlug)
    {
        napis[n]='\0';
    }
}

int main()
{
    char napis[]="alaMaKota";
    wytnij(napis,0,4);
    printf("%s\n",napis);
    return 0;
}
