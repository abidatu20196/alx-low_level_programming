#include "main.h"

/**
 * is_prime - checks if a number is prime
 * @f: factor check
 * @p: possible prime number
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(int f, int p)
{
if (f == 1)
	return (0);
else if (f % p == 0 && p != f && p != 1)
	return (0);
else if (f % p == 0 && p == f)
	return (1);
else
	return (is_prime(f, p + 1));
}

/**
 * is_prime_number - state if number is prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
return (is_prime(n, 1));
}
