#include <stdio.h>
#include "main.h"

void print_times_table(int n)
{
	int i, j;
	int mul;

	if (n > 15 && n < 0)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
