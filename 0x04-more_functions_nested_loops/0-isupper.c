#include "main.h"

/**
 * _isupper - check if a latter is upper
 *
 * @c: input character
 *
 * Return: (1) for true (0) false
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
