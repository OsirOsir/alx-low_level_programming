#include "variadic_function.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -prints strings followed with new line.
 * @separator: String to be printed between strings
 * @n: Number of strings passed to function.
 * @...: Variable number of strings to be printed.
 * Description:   If separator is NULL, It will not be printed.
 *                 If one of the strings if NULL,(nil) printed
 *                 instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}
