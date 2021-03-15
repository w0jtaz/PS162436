#include <stdio.h>
#include <stdlib.h>

void foo(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x=6,y=9;
    printf("%d %d\n",x,y);
    foo(&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}
