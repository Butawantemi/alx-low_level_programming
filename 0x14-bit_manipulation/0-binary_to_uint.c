#include "main.h"

/**
* binary_to_uint - Convert a binary number to an unsigned integer.
* @b: Pointer to the binary string.
*
* Return: The converted number
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int converted_value = 0;
int j;
if (!b)
return (0);
for (j = 0; b[j]; j++)
{
if (b[j] < '0' || b[j] > '1')
return (0);
converted_value = (converted_value << 1) + (b[j] - '0');
}
return (converted_value);
}
