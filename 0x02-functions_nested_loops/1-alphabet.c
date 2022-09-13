#include "main.h"

/**
 * print_alphabet -> prints the lowercase alphabets
 */
void print_alphabet(void)
{
	int lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		_putchar(lowerCase);
	}
	_putchar('\n');
}
