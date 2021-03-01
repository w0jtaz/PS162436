#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k;
    scanf("%d\n%d\n%d", &n, &m, &k);
    int i=0;
    while((n*i)<k)
    {
        if((n*i)>m)
        {
            printf("%d\n", n*i);
        }
        i++;
    }
    return 0;
}
