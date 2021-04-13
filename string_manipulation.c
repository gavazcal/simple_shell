#include "holberton.h"

/**
 * get_buff - reads the input and stores it into a buffer
 *
 * Return: a string of the input
 */
char *get_buff(void)
{
	char *buf = NULL;
	size_t size = 1024;
	int bytes = 0;

	buf = malloc(sizeof(char) * size);

	if (bytes == 0)
	{
		_putchar('\n');
		free(buffer);
		exit(EXIT_SUCCESS);
	}
	else if (bytes == -1)
	{
		perror("Error: could not read");
		exit(EXIT_FAILURE);
	}
	buf[bytes - 1] = '\0';
	fflish(stdin);
	return (buf);
}

/**
 * string_tokenizer - divides a string into separate tokens
 * @string: the string to evaluate
 * Return: tokens separated
 */
char **string_tokenizer(char *string)
{
	char **token;
	int index;
	char delimiter[] = "\n ";

	token = malloc(100 * sizeof(char *));

	if (token == NULL)
	{
		exit(EXIT_FAILURE);
	}
	token[0] = strtok(string, delimiter);

	for (index = 0; token[index] != NULL; index++)
	{
		token[index + 1] = strtok(NULL, delimiter);
	}
	token[index + 1] = NULL;
	return (token);
}

/**
 * string_length - finds the length of a string
 * @string: the string
 * Return: length
 */
int string_length(char *string)
{
	int i = 0;

	while (string[i])
		i++;
	return (i);
}

/**
 * strcpy - copies a string
 * @dest: destination string
 * @src: origin string
 * @n: sting length
 * Return: destination memory address
 */
char *strcpy(char *dest, char *src, int n)
{
	int idx;

	for (idx = 0; idx < n && src[idx] != '\0'; idx++)
	{
		dest[idx] = src[idx];
	}
	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}
	return (dest);
}

/**
 * string_compare - compares two strings to acertain if they are identical
 * @s1: string one
 * @s2: string two
 * Return: 1 on success, 0 otherwise
 */
int string_compare(char *s1, char *s2)
{
	unsigned int idx = 0;

	while (s1[idx])
	{
		if (s1[idx] != s2[idx])
			return (0);
		++idx;
	}
	return (1);
}

