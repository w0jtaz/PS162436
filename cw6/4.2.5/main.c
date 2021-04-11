#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int foo(unsigned int n)
{
    int i,j,pom ;
    bool *sito=malloc(n* sizeof(bool)) ;
    for (i=0; i<n; i++)
    {
       sito[i]=true ;
    }
    for (i=2; i<n; i++)
    {
        if(sito[i])
        {
            pom= i;
        }
        for(j=2*i; j<n; j+=i)
        {
            sito[j]= false;
        }
    }
    free(sito);
    return pom;
}

int main()
{
    printf("%d\n", foo(3));
    printf("%d\n", foo(4));
    printf("%d\n", foo(5));
    printf("%d\n", foo(6));
    printf("%d\n", foo(10));
    return 0;
}
