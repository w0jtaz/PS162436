#include <stdio.h>
#include <stdlib.h>

int NWD(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }
    return a;
}

int main()
{
    printf("%d\n", NWD(12, 18));
    return 0;
}
