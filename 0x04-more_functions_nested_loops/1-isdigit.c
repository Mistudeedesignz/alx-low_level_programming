#include "main.h"

/**
 * _isdigit - a function tat checkes a digit 0-9
 * @c: input
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 37))
		return (1);
	else
		return (0);
}
