#include <stdio.h>
#include <stdlib.h>

int funkcja(int k)
{
    if (k==0)
    {
        return 1;
    }
    if (k==1)
    {
        return 2;
    }
    if (k%2==0)
    {
        return funkcja(k-2)+k;
    }
    if (k%2!=0)
    {
        return funkcja(k-2)*k;
    }
}

int main()
{
    printf("%d\n",funkcja(1));
    printf("%d\n",funkcja(3));
    return 0;
}
