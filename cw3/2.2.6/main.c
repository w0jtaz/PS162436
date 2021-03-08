#include <stdio.h>
#include <stdlib.h>

int main()
{
    int potega(int n, int m)
    {
        int wynik = 1;
        for(int i = 1; i <= m; i++)
        {
            wynik *= n;
        }
        return wynik;
    }
    printf("%d\n", potega(2,10));
    return 0;
}
