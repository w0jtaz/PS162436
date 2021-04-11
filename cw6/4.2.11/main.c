#include <stdio.h>
#include <stdlib.h>

int foo(int n, double tab1[n], double tab2[n])
{
    int iloczyn = 0;
    for(int i=0; i<n; i++)
    {
        iloczyn += tab1[i]*tab2[i];
    }
    return iloczyn;
}

int main()
{
    double tab1[2] = {1,2};
    double tab2[2] = {3,-5};
    printf("%d\n", foo(2, tab1, tab2));
    return 0;
}
