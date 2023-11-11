#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 * If separator is NULL, don't print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *current_string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current_string = va_arg(args, char *);

		if (current_string != NULL)
		{
			printf("%s", current_string);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
