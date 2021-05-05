#include <stdio.h>
#include <stdlib.h>

int** foo(int n)
{
    int** tab = malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc((i+1)*sizeof(int));
    }
    return tab;
}

int main()
{
    int**tablica=foo(4);
    **tablica=1;
    *(*(tablica+1)+0)=3;
    *(*(tablica+1)+1)=-1;
    *(*(tablica+2)+0)=4;
    *(*(tablica+2)+1)=2;
    *(*(tablica+2)+2)=7;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("[%d %d] = %d,",i,j,*(*(tablica+i)+j));
            printf("%p\n",*(tablica+i)+j);
        }
    }
    return 0;
}
