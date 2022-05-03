#include "main.h"

/**
 * _strlen - count the lenth of a string
 * @s: string
 *
 * Return:the Value of the lenght i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
