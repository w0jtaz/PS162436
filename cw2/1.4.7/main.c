#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wynik, n, m;
    scanf("%d\n%d", &n, &m);
   if(n <= m)
    {
        for(int i=n; i<=m; i++)

        {
            wynik = (n*i*m)*i;
            //problem z rozwi¹zaniem zadania
        }
        printf("%d", wynik);
    }
    return 0;
}
