#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 *
 * @b: binary number
 *
 * Return: int of converted
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count, j, dec;

	dec = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}
	}
	count--;
	for (j = 0; b[j] != '\0'; j++)
	{
		dec = dec + (b[j] - '0' << count);
		count--;
	}

	return (dec);
}
