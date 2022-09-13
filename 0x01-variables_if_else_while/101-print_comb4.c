#include <stdio.h>

/**
 * main - Prints possible combinations of three
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, m, n;

	for (i = 0; i <= 9; i++)
	{
		for (m = 1; m <= 9; m++)
		{
			for (n = 2; n <= 9; n++)
			{
				if (n > m && m > i)
				{
					putchar(i + '0');
					putchar(m + '0');
					putchar(n + '0');
					if (i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
