#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int fibNum;
	unsigned long fibOne = 0, fibTwo = 1, allSum;
	unsigned long fibOne_halfOne, fibOne_halfTwo, fibTwo_halfOne, fibTwo_halfTwo;
	unsigned long halfOne, halfTwo;

	for (fibNum = 0; fibNum < 92; fibNum++)
	{
		allSum = fibOne + fibTwo;
		printf("%lu, ", allSum);

		fibOne = fibTwo;
		fibTwo = allSum;
	}
	fibOne_halfOne = fibOne / 10000000000;
	fibTwo_halfOne = fibTwo / 10000000000;
	fibOne_halfTwo = fibOne % 10000000000;
	fibTwo_halfTwo = fibTwo % 10000000000;

	for (fibNum = 93; fibNum < 99; fibNum++)
	{
		halfOne = fibOne_halfOne + fibTwo_halfOne;
		halfTwo = fibOne_halfTwo + fibTwo_halfTwo;
		if (fibOne_halfTwo + fibTwo_halfTwo > 9999999999)
		{
			halfOne += 1;
			halfTwo %= 10000000000;
		}

		printf("%lu%lu", halfOne, halfTwo);
		if (fibNum != 98)
		{
			printf(", ");
		}
		fibOne_halfOne = fibTwo_halfOne;
		fibOne_halfTwo = fibTwo_halfTwo;
		fibTwo_halfOne = halfOne;
		fibTwo_halfTwo = halfTwo;
	}
	printf("\n");
	return (0);
}
