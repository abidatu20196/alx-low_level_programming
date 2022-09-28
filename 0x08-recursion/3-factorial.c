#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: integer to take factorial of
 * Return: factorial of -1 if n < 0, or n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
