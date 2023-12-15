#include "main.h"

/**
 * binary_to_uint - binary to unsigned int
 * @b: string of bits
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count, j, dec;

	dec = 0;

	if (!b)
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
		dec = dec + ((b[j] - '0') << count);
		count--;
	}

	return (dec);
}
