#include "main.h"

/**
* Print_binary - Prints the binary equivalent of a decimal number
* @n: number to print in binary
*
* Description: This function takes an unsigned long integer 'n' and prints its
* binary representation to the standard output.
* It uses the _putchar function to print characters.
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
