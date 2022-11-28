#include <stdio.h>
#include <unistd.h>

/** count numbers of characters from input **/

int main(void)
{
    long nc;
    int c;

    c = getchar();
    while (c != EOF)
    {
        ++nc;
        c = getchar();
    }
    printf("nc: %ld\n", nc);
    return (0);
}
