#include <stdio.h>
#include <stdlib.h>

/**
 * main - This prints the name of the programme
 * @argc: The number of the arguments
 * @argv: An array of the arguments passed
 * Return: 0
 */

int main(int argc, char **argc)
{
	if (argc == 1)
	{
		printf("%s\n", argc[0]);
	}
	return (0);
}
