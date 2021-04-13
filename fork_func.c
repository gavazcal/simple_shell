#include "holberton.h"

/**
 * fork_func - divides between parent and child process
 * @args: passed arguments
 * Return: 0 if success, 1 otherwise
 */
int fork_func(char *args[])
{
	pid_t child_process;
	int fail_check = 0, wait_check;

	child_process = fork();
	if (child_process == -1)
	{
		perror("Error: forking");
	}

	if (child_process == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			fail_check = 1;
			return (fail_check);
		}
	}
	else
	{
		wait(&wait_check);
	}
	return (fail_check);
}
