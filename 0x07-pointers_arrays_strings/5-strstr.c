#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: Which is input
 * @needle: which is an input
 * Return: Always 0 (Success)
 *
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *teo && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}
	return (NUL);
}
