#include "main.h"

/**
 * times_table - print 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;
	int mul;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = (i * j);
			if (mul > 9)
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else if (mul >= 0 && mul <= 9)
			{
				_putchar(' ');
				_putchar((mul % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
