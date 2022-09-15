#include "main.h"

/**
 * largest_number - retuens the largest of 3 number
 * @a: first integer
 * @b: second integer
 * @c: thrid integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	largest = (a > b) ? a : b;
	largest = (largest > c) ? largest : c;
	return (largest);
}
