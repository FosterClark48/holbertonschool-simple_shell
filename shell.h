#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>

/*external environment variable*/
extern char **environ;

/*Helper functions*/
void prompt(void);
char **strsplit(char *string, char *delim);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strdup(const char *str);
int _strlen(char *str);
int child(char **array, char *av[], int cnt);

/*free func*/
void free_2d_array(char **array);

/*environment*/
int print_env(void);

/*exit*/
int _atoi(char *s);
int _isdigit(int c);
int exitfunc(char **array, char *av[], char *line, int cnt, int ret_stat);

/*signal management*/
void manage_signal(int num_s __attribute__((unused)));

/*Error management*/
void error_print(char **array, char *av[], int cnt, int num);
int print_int(int n);
int recursive_int(int n, int cnt);
int _putchar(char c);

#endif
