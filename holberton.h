#ifndef HOLBERTON_H
#define HOLBERTON_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

/*PROTOTYPES*/
char **string_tokenizer(char *string);
int string_length(char *string);
int string_compare(char *s1, char *s2);
char *get_buff(void);
int fork_func(char *args[]);

#endif