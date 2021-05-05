#include <stdio.h>
#include <stdlib.h>

int *** alokuj(int n, int m, int k)
{
    int *** temp=malloc(n*sizeof(int**));
    for(int i=0;i<n;i++)
    {
        *(temp+i)=malloc(m*sizeof(int*));
        for(int j=0;j<m;j++)
        {
            *(*(temp+i)+j)=malloc(k*sizeof(int));
        }
    }
    return temp;
}

void foo(int*** tab,int n,int m,int k)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            free(*(*(tab+i)+j));
        }
        free(*(tab+i));
    }
    free(tab);

}

int main()
{
    int n=2,m=3,k=4;
    int *** tab=alokuj(n,m,k);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int s=0;s<k;s++)
            {
                *(*(*(tab+i)+j)+s)=i*j*s;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int s=0;s<k;s++)
            {
                printf("[%d,%d,%d]=%d,%p\n",i,j,s,*(*(*(tab+i)+j)+s),*(*(tab+i)+j)+s);
            }
        }
    }
    foo(tab,n,m,k);
    return 0;
}

