#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fibOne = 0, fibTwo = 1, fibSum;
	float totalSum;

	while (1)
	{
		fibSum = fibOne + finTwo;
		if (finSum > 4000000)
		{
			break;
		}
		if ((fibSum % 2) == 0)
		{
			totalSum += fibSum;
		}
		finOne = fibTwo;
		fibTwo = fibSum;
	}
	printf("%.0f\n", totalSum);

	return (0);
}
