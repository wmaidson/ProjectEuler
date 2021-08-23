#include <stdio.h>

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



