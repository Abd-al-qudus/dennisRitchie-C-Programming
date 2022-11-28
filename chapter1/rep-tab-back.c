#include <unistd.h>
#include <stdio.h>

/* copy char from input to output */

int main(void)
{
    int c, tab, back, bslash;

    c = getchar();
    while (c != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
            putchar(c);
        c = getchar();
    }
    return (0);
}


