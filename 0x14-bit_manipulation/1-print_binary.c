#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
int j, leading_ones = 0;
unsigned long int current;
for (j = 63; j >= 0; j--)
{
current = n >> j;
if (current & 1)
{
_putchar('1');
leading_ones++;
}
else if (leading_ones)
_putchar('0');
}
if (!leading_ones)
_putchar('0');
}

