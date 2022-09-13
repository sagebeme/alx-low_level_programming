#include "main.h"
#include <stdio.h>

/**
	* checkInDay - checks if hours given are inside a day
	* @hour1: first digit of hour
	* @hour2: second digit of hour
	* Description: checks if hours given are inside a day
	* Return: boolean
*/

int checkInDay(char hour1, char hour2)
{
	if (hour1 == '2' && hour2 == '4')
	{
		return (0);
	}
	return (1);
}


/**
	* jack_bauer - prints all minutes in a day using character like a nomad
	* Description: print all minutes in a day
	* Return: void
*/

void jack_bauer(void)
{
	char hour1 = '0';
	char hour2 = '0';
	char minute1 = '0';
	char minute2 = '0';

	while (checkInDay(hour1, hour2))
	{
		_putchar(hour1);
		_putchar(hour2);
		_putchar(':');
		_putchar(minute1);
		_putchar(minute2);
		_putchar('\n');
		if (hour2 == '9' && (minute1 == '5' && minute2 == '9'))
		{
			hour1++;
			hour2 = minute1 = minute2 = '0';
		}
		else if (minute1 == '5' && minute2 == '9')
		{
			hour2++;
			minute1 = minute2 = '0';
		}
		else if (minute2 == '9')
		{
			minute1++;
			minute2 = '0';
		}
		else
		{
			minute2++;
		}
	}
}
