#include "main.h"

/**
*print_alphabetx10 - Make the alphabet x10 times
*
*Return: void
*/

void print_alphabet(void)
{

char ch;
int i;
i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n'); 
i++;
}

}

