#include <stdio.h>

/**
* main - prints its name follwoed by a newline
* @argc: number of arguments supplied to pointer
* @argv: an arry of ponters to the argument
*
* Return: returns the name.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}