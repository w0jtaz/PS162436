#include <stdio.h>
#include <stdlib.h>

int ** foo(int n, int m)
{
    int ** temp=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(temp+i)=malloc(m*sizeof(int));
    }
    return temp;
}

int main()
{
    printf("%Iu\n",sizeof(int**));
    printf("%Iu\n",sizeof(int*));
    printf("%Iu\n",sizeof(int));
    int ** tab=foo(2,3);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            *(*(tab+i)+j)=i*j;
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("[%d,%d]=%d,%p\n",i,j,*(*(tab+i)+j),*(tab+i)+j);
        }
    }
    return 0;
}
