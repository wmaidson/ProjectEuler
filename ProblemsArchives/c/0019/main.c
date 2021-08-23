#include <stdio.h>

int main(void)
{
    int result;
    int i;

    result = 0;
    i = 1;
    while( i < 1000 && i++)
    {
        if((i % 3) == 0 || ((i % 5) == 0))
        {
            result += i;
        }
    }
    printf("The result is: %d\n", result);
    return 0;
}