#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=n; i>=0; i--)
    {
        if(i<n)
        {
          int suma;
            suma = *i+*i;
            printf("%d\n", suma);

        }

    }




    return 0;
}
