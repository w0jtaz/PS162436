#include <stdio.h>
#include <stdlib.h>

int main()
{
   int silnia (int n)
   {
        int wynik = 1;
        for(int i =1; i<=n; i++)
        {
           wynik *=i;
        }
       return wynik;
   }

   int silnia2 (int n)
   {
        if(n == 0 || n == 1)
            return 1;
        return n*silnia2(n-1);
   }

    int n;
    scanf("%d", &n);
    printf("%d\n", silnia(n));
    return 0;
}
