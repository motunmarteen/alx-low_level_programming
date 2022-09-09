#include <stdio.h>
#include <stdlib.h>
#include <time>

/**
 * main - Entry point
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'x'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
