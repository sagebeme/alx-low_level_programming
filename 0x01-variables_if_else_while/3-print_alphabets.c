#include <stdio.h>
/**
 * main -Entry point
 * 
 * Return: Always 0 (seccess/correct)
 */
int main(void)
{
	char lower_case;
	char upper_case;

	for (lower_case= 'a';lower_case <='z';lower_case++)
	{
	putchar(lower_case);
	}
	for (lower_case= 'A';lower_case <='Z';lower_case++)
        {
        putchar(lower_case);
        }

	putchar("\n");

	return (0);

}
