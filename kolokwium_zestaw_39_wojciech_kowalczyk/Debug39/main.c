#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a-*b;
}

int main()
{
    int tab[] = {0,2,-3,0,-2,3,9};
    int *wsk=tab-1;
    int b = *(wsk+=4); //b=0
    int c = b*b; // b= 0 , c=0
    int d = foo(&b,&c); // b= 0 , c=0  , d=0
    int e = (wsk+=-1)[3]; // b= 0 , c=0  , d=0  , e=3
    e = (d -= 2) + (c += 2); // b= 0 , c=2  , d=-2  , e=0
    c = d + (b+=4); // b=4  , c=2  , d= -2 , e=0
    b = *wsk + e; // b=-3  , c= 2 , d= -2 , e= 0
    b= (--c)-(d++);  // b= 3 , c= 1 , d= -1 , e= 0
    return 0;
}
