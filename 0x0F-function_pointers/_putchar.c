#include <unistd.h>

/**
 * _putchar - writes the characer c to stdout
 * @c: The charater to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
