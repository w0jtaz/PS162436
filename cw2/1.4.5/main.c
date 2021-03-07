#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, suma;
    scanf("%d", &n);
    if (n != 0)
    {
        for(int i=1; i<=n; i++)
        {
            suma += pow(i,2);
        }
          printf("%d",suma);
    }
    else
    {
        printf("Wymaganie n != 0");
    }
    return 0;
}
