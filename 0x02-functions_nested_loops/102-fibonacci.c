#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int fibNum;
	unsigned long fibOne = 0, fibTwo = 1, sum;

	for (fibNum = 0; fibNum < 50; fibNum++)
	{
		sum = fibOne + fibTwo;
		printf("%lu", sum);

		fibOne = fibTwo;
		fibTwo = sum;

		if (fibNum == 49)
		{
			print("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
