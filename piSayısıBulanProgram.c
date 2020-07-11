#include <stdio.h>

#define N 1000000

int main()
{
    double sum = 0.;
    int k;

    for (k = 0; k < N; ++k)
        sum += (k % 2 ? -1. : 1.) / (2 * k + 1);

    printf("pi = %lf\n", 4 * sum);

    return 0;
}
