#include “main.h”

/**
 * _isupper - function to check if character is uppercase or not
 * @c: parameter
 * Return: 0
 */

int _isupper(int c)
{
	if ((c >= ‘A’) && (c <= ‘Z’))
	{
		return (1);
	}
	return (0);
}
