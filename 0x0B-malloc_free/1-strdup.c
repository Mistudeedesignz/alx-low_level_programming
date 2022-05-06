#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * containing a copy of the string given as parameter.
 * @str:string
 *
 * Return:char
 */
char *_strdup(char *str)
{
	char *s;
	int i, I = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		I++;

	s = malloc(sizeof(char) * (I + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];

	s[I] = '\0';

	return (s);
}
