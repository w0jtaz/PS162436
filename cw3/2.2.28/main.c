#include <stdio.h>
#include <stdlib.h>

int foo(int n,int m)
{
    if(m==0)
        return n;
    if (m>n)
        return foo(m,n);
    return n-m+foo(n-1,m)+foo(n,m-1);
}

int main()
{
    printf("%d %d %d\n",0,0,foo(0,0));
    printf("%d %d %d\n",0,1,foo(0,1));
    printf("%d %d %d\n",1,0,foo(1,0));
    printf("%d %d %d\n",1,1,foo(1,1));
    printf("%d %d %d\n",1,2,foo(1,2));
    printf("%d %d %d\n",2,2,foo(2,2));
    return 0;
}
