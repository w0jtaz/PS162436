#include <stdio.h>
#include <stdlib.h>

struct samolot
{
    char model;
    int liczba_silnikow;
};

double minimum(struct samolot tab[], int n)
{
int i, j;
double pom;
double min=sqrt(pow(tab[1].x-tab[0].x,2)+
                pow(tab[1].y-tab[0].y,2)+
                pow(tab[1].z-tab[0].z,2));
for(i=0; i<n-1; i++)
    {
        for(j=i+1;j<n:j++)
        {
            pom=
        }
    }

}

int main()
{
    printf("Hello world!\n");
    return 0;
}
