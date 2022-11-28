#include <stdio.h>
#include <unistd.h>

/* count numbers of newlines in entry */

int main(void)
{
    int c;
    long nl;

    c = getchar();
    while (c != EOF)
    {
        if (c == '\n')
            nl++;
        c = getchar();
    }
    printf("nl: %ld\n", nl);
    return (0);
}
