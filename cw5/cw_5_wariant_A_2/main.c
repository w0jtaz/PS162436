#include <stdio.h>
#include <stdlib.h>

int funkcja(int k)
{
    if (k==0 || k==1)
    {
        return 2;
    }
    if (k==0 || k%2==0)
    {
        return funkcja((k/2)-1)+k/2;
    }
    if (k>0 || k%2!=0)
    {
        return 2*funkcja(2*(k/2)) -k/2;
    }
}

int main()
{
    printf("%d\n",funkcja(0));
    printf("%d\n",funkcja(1));
    printf("%d\n",funkcja(2));
    printf("%d\n",funkcja(3));
    printf("%d\n",funkcja(4));
    printf("%d\n",funkcja(5));
    printf("%d\n",funkcja(6));
    printf("%d\n",funkcja(7));
    printf("%d\n",funkcja(8));
    printf("%d\n",funkcja(9));
    return 0;
}
