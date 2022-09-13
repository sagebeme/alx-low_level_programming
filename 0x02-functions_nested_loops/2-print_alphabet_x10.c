#include "main.h"


/**
	* print_alphabet_x10 - prints alphabet 10 times
	* Description: print alphabet 10 times
	* Return: void
*/

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			if (x == 'z')
			{
				_putchar('\n');
			}
			x++;
		}
		i++;
	}
}
