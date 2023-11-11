#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * If separator is NULL, don't print it
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
