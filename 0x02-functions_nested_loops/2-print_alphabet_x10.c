#include "main.h"

/**
* print_alphabet_x10 -> prints the lowercase alphabets
*/
void print_alphabet_x10(void)
{
	int i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
