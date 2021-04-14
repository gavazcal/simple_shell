#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

/*PROTOTYPES*/
char **string_tokenizer(char *string);
int string_length(char *string);
int string_compare(char *s1, char *s2);
char *get_buff(void);
int fork_func(char *args[]);
int _putchar(char c);
int _puts(char *str);

/*Path*/
char **check_path(char **args);
char *path_concat(char *s1, char *s2);
char *_copypath(char *name);

typedef struct addresses
{
	void *address;
	struct addresses *next;
} addr_t;

typedef struct builtins_s
{
	char *name;
	int (*func)();
} builtins_t;

#endif
