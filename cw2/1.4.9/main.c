#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    scanf("%d\n%d", &x, &y);
    while(x != y)
    {
        if(x > y) {
           x = x - y;
        } else {
            y = y - x;
        }
    }
    printf("%d", x);

    return 0;
}
