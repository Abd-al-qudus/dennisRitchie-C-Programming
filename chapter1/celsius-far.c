#include <stdio.h>

/* clesius to fareinheit */

int main(void)
{
    float far, celsius;
    int lower, step, upper;

    lower = 0, upper = 300, step = 20;
    celsius = lower;
    printf("CELS. \tFARH.\n");
    for (celsius; celsius <= upper; celsius += step)
    {
        far = (9.0 * celsius / 5.0) + 32;
        printf("%.2f\t %.2f\n", celsius, far);
    }
    return (0);
}
