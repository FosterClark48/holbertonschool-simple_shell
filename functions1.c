#include "shell.h"
/**
*_strcmp - fucntion that compares string s1 to s2
*@s1: string variable to compare to s2
*@s2: string variable thats compared to by s1
*Return: 0 = strings are the same
*/
int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (comp == 0)
		return (0);
	else
		return (0);
}
/**
*_strcpy - function that copies a string
*@dest: destination variable
*@src: source variable
*Description: function copying string including null
*Return: 0 = Success
*/
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[j] = '\0';

	return (dest);
}
/**
*_strcat - concatenates two strings function
*@dest: Destination variable
*@src: Source destination
*Description: Function that concatenates two strings
*Return: 0 = Success
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	for (i = 0; dest[i]; i++)

		;

		for (len = 0; src[len]; len++)
		{
			dest[i] = src[len];
			i++;
		}
		return (dest);
}
/**
*strsplit - splits string with strtok
*@string: string to split
*@delim: delimiter in string
*Return: double pointer array w/ string split
*/
char **strsplit(char *string, char *delim)
{
	char **array;
	char *tok;
	int i = 0;

	array = (char **) malloc(sizeof(char *) * 1024);
	if (array == NULL)
	{
		return (NULL);
	}
	tok = strtok(string, delim);
	while (tok != NULL)
	{
		array[i] = tok;
		tok = strtok(NULL, delim);
		i++;
	}
	array[i] = NULL;
	return (array);
}
