#include "variadic_functions.h"
#include <stdio.h>
#include <starg.h>

/**
 * print_numbers - Function that prints numbers, followed by new line.
 * @separator: String to be printed btwn numbers
 * @n: Number of Intagers passed to function
 * @... : Numbers of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%i", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
