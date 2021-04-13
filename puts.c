#include "holberton.h"
/**
 * _putchar - prints a single character
 * @c: the char
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));

}

/**
 * _puts - writes a string
 * @str: the string
 *
 * Return: 0
 */
int _puts(char *str)
{
	return (write(STDOUT_FILENO, str, string_length(str)));
}
