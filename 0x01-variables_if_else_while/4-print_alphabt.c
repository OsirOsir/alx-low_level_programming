#include <stdio.h>
/**
 * main - program entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
