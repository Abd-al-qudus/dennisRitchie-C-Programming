#include <stdio.h>

int main(void)
{
    /*print fareiheit celsius table */

    int far, celsius;
    int lower, step, upper;

    lower = 0, step = 20, upper = 300;
    far = lower;
    printf("FARH. \tCELS.\n");
    while (far <= upper)
    {
        celsius = 5 * (far - 32) / 9;
        printf("%d\t %d\t\n", far, celsius);
        far += step;
    }
    return (0);
}
