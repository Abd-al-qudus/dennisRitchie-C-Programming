#include <stdio.h>

/* compute the power of a number */

int _power(int num, int pow)
{
    int i, base;

    base = 1;
    for (i = 0; i < pow; i++)
        base = base * num;
    return (base);
}

int main(void)
{
    int a;
    a = _power(5, 3);
    printf("%d\n", a);
    return (0);
}
