#include <stdio.h>

/*
 * Multiples of 3 or 5
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

int x = 0;
int i = 0;
int y = 1000;

int main(void)
{
    while ((i * 3) < y) {
        x = x + ( i * 3 );
        i =  i + 1;
        printf("o valor i: %d de x: %d\n ", i, x);
    }
    return 0;
}
