#include <stdio.h>
#include <stdlib.h>

int funkcja(int n)
{
    if (n==0 || n==1)
    {
        return 2;
    }
    if (n>0 || n%2==0)
    {
        return funkcja(n-1)+n-1;
    }
    if (n>0 || n%2!=0)
    {
        return 2*funkcja(2*n) -n;
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
    printf("%d\n",funkcja(10));
    return 0;
}
