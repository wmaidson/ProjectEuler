#include <stdio.h>

/*
 * Counting Sundays
 *
 * You are given the following information, but you may prefer to do some research for yourself.
 *
 * 1 Jan 1900 was a Monday.
 * Thirty days has September,
 * April, June and November.
 * All the rest have thirty-one,
 * Saving February alone,
 * Which has twenty-eight, rain or shine.
 * And on leap years, twenty-nine.
 * A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
 * How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?
 */

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