#include "main.h"

/**
	* _isalpha - checks if c is a letter
	* @c: integer
	* Description: checks if c is a letter
	* Return: int
*/

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
