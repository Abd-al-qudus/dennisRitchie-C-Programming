#include <unistd.h>
#include <stdio.h>

/* copy char from input to output */

int main(void)
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
    return (0);
}
