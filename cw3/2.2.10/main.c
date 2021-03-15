#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
     int suma;
    for(int i=n; i>=0; i--)
    {
        if(i<n)
        {
         suma *=i;
            printf("%d\n", suma);

        }

    }




    return 0;
}
