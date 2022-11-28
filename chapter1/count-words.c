#include <unistd.h>
#include <stdio.h>
#define OUT 0
#define IN 1
/* count the words in a stream */

int main(void)
{
    int c, nl, nw, nc, state;

    nl = nw = nc = 0;
    c = getchar();
    while (c != EOF)
    {
        ++nc;
        if (c == '\n')
            nl++;
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            nw++;
        }
        c = getchar();
    }
    printf("wc: %ld\n", nw);
    return (0);
}


