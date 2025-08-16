#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;
    do
    {
        n = get_int("How many cents?");
    }
    while (n < 0);
    int remaining = n;
    int quarter = remaining / 25;
    remaining %= 25;
    int dime = remaining / 10;
    remaining %= 10;
    int nickel = remaining / 5;
    remaining %= 5;
    int cent = remaining;
    int total = quarter + dime + nickel + cent;
    printf("%i\n", total);
}