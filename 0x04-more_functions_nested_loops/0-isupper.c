#include “main.h”

/**
 * _isupper - function that checks for uppercase character 
 * @c: parameter of the function
 * Return: 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
