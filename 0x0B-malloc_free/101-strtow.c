#include "main.h"
#include <stdlib.h>


int word_len(char *str);
int count_words(char * str);
char **strtow(char *str);

/**
* word_len - Locates the index marking the end
* or the first word contained withn a string.
* @str: The string to be searched.
*
* Return: The index marking the end of 
* the initial word pointed to with str.
*/

int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
* count_words - counts number of words contained 
* within a string
* @str: The string to be searched.
* 
* Return: The index marking the end of the
* initial word pointed with str.
*/

int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
* count_words - Counts number of word contained within a string
* @str: The string to be searched.
* Return: The number of words contained within str.
*/

int count_words(char *str)
{
	int index = 0, word = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}

/**
*strtow - splits a string into words.
* @str: The string to be split
* Return: If str = NULL, str = "", or the function fails - NULL.
* Otherwise - a pointer to an array of strings (words)
*/

char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL ||

