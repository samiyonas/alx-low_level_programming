#include "main.h"

/**
 * _strcat - a function that returns char pointer
 * @dest: pointer variable
 * @src: pointer variable
 * Return: character pointer
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int result;
	int a;
	int j;

	result = 0;
	for (i = 0; *(dest + i) != '\0'; i++)
	{
		result++;
	}
	for (a = result, j = 0; *(src + j) != '\0'; a++, j++)
	{
		*(dest + a) = *(src + j);
	}
}
