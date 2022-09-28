#include "main.h"

/**
 * _sqrt - returns the natural square root of a number.
 *
 * @a: an integer
 * @c: number to find sqrt of
 * Return: a's sqrt
 */
int _sqrt(int a, int c)
{
	if (a == 1)
		return (1);
	else if (c == a || a < 0)
		return (-1);
	else if (c * c == a)
		return (c);
	else
		return (_sqrt(a, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
