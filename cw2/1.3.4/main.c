#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;
    scanf("%lf\n%lf", &a, &b);
    if (fabs(a)>=fabs(b))
    {
        printf("%lf", a);
    } else
    {
        printf("%lf", b);
    }

    return 0;
}

