#include <stdio.h>
#include <stdlib.h>

    void zlicz()
    {
        static int liczba = 0;
        liczba++;
        printf("Wywolanie funkcji: %d\n", liczba);
    }

int main()
{
    zlicz();
    zlicz();
    zlicz();
    zlicz();

    return 0;
}
