#include <stdio.h>
#include <stdlib.h>

int ** alokuj(int n, int m)
{
    int ** temp=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(temp+i)=malloc(m*sizeof(int));
    }
    return temp;
}

void foo(int** tab,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        free(*(tab+i));
    }
    free(tab);

}

int main()
{
    printf("%Iu\n",sizeof(int**));
    printf("%Iu\n",sizeof(int*));
    printf("%Iu\n",sizeof(int));
    int n=2,m=3;
    int ** tab=alokuj(n,m);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            *(*(tab+i)+j)=i*j;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d,%d]=%d,%p\n",i,j,*(*(tab+i)+j),*(tab+i)+j);
        }
    }
    foo(tab,n,m);
    return 0;
}
