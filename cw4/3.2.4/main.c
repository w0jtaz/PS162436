#include <stdio.h>
#include <stdlib.h>

int* foo(int *a, int *b)
{
    if (*a>*b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
}

int main()
{
    //przypadek 1
    int x=6,y=9;
    printf("%d %d\n",x,y);
    foo(&x,&y);
    printf("%d %d\n",x,y);

    printf("\n");
    //przypadek 2
    int z=6,m=3;
    printf("%d %d\n",z,m);
    foo(&z,&m);
    printf("%d %d\n",z,m);

    return 0;
}
