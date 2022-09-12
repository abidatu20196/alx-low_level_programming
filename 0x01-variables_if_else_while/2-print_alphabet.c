#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char fun;

	for (fun = 'a'; fun <= 'z'; fun++)
		putchar(fun);
	putchar('\n');
	return (0);
}
