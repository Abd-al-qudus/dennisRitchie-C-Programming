#include <unistd.h>
#include <stdio.h>

/* copy char from input to output */

int main(void)
{
    int c, cc, nl;

    cc = 0;
    c = getchar();
    while (c != EOF)
    {
        if (c == ' ')
            cc++;
        if (c == '\n')
        {
            cc = 0;
            nl++;
        }
        if (c == ' ' && cc <= 1)
            putchar(' ');
        else if (c == ' ' && cc > 1)
            ;
        else
            putchar(c);
        c = getchar();
    }
    return (0);
}

