#include "holberton.h"
/**
 * main - command input interpreter
 *
 * Return: always 0
 */
int main(void)
{
	char *input, **args;
	int fork_check, file_descriptor = isatty(STDIN_FILENO);

	do {
		if (file_descriptor == 1)
			_puts("($) ");

		input = get_buff();

		if (_strcmp(input, "exit") == 0)
		{
			file_descriptor = 0;
		}
		else if (_strcmp(input, "env") == 0)
		{
			int index;

			for (index = 0; environ[index]; index++)
			{
				_puts(environ[index]);
				_putchar('\n');
			}
		}
		else
		{
			args = string_tokenizer(input);
			fork_check = fork_func(args);
			if (fork_check == 1)
			{
				perror("execution fail");
				free(input);
				free(args);
				exit(EXIT_FAILURE);
			}
			free(args);
		}
		free(input);
	} while (file_descriptor);
	return (0);
}
