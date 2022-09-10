#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f = '0';
	int s = '0';
	int t = '0';

	while (f <= '9')
	{
		s = '0';
		while (s <= '9')
		{
			t = '0';
			while (t <= '9')
			{
				if (f == s || f == t || s == t)
				{
				}
				else if (f > s || f > t || s > t)
				{
				}
				else
				{
					putchar(f);
					putchar(s);
					putchar(t);
					if (f == '7' && s == '8' && t == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				t++;
			}
			s++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
