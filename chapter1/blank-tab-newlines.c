#include <stdio.h>
#include <unistd.h>

/* count numbers of newlines, blanks and tabs in entry */

int main(void)
{
    int c;
    long nl, tab, blanks;

    c = getchar();
    while (c != EOF)
    {
        if (c == '\n')
            nl++;
        if (c == '\t')
            tab++;
        if (c == ' ')
            blanks++;
        c = getchar();
    }
    printf("newlines: %ld\n", nl);
    printf("tabs: %ld\n", tab);
    printf("blanks: %ld\n", blanks);
    return (0);
}

