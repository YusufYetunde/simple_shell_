#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <ctype.h>
#include <errno.h>

typedef struct infot
{
	int argc;
	char *arg;
	char **argv;
	int status;
	char *history;
	char *alias;
}info_t;
typedef struct lists
{
	int *num;
	char *str;
	struct lists *next;
}list_t;

int _interpreter(char *s);
int is_interactive(void);
int is_delimiter(char c);
int has_alphabets(char *s);

int _myexit(info_t *info);
int _mycd(info_t *info);
int _myhelp(info_t *info);

int _shellhistory(info_t *);
int unset_alias(info_t *info, char *str);
int set_alias(info_t *info, char *str);
int print_alias(list_t *node);
int _myalias(info_t *info);


#endif
