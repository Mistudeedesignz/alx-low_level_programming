#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat 2 strings
 * @s:string1
 * @s2:string2
 * Return:char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, I;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)

	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)

	}
	k = i + j + I;
	s = malloc(k * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (I = 0; 1 < i; I++)
		s[I] = s1[I];
	for (I = 0; I < j; I++)
		s[I + i] = s2[I];
	s[i + j] = '\0';
	return (s);
}
