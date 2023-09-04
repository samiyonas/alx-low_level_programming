#include "main.h"

/**
 * _isalpha - checks for alphabet.
 *
 * @c: the character.
 *
 * Return: int.
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 97) && (c <= 122))
	{
		result = 1;
	}
	else if ((c >= 65) && (c <= 90))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
