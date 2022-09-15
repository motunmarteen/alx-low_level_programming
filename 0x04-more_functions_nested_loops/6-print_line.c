#include "main.h"

/**
 * print_line -> printing line
 * @n: The number of _ characters to be printed.
 */
voind print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
