#include "main.h"
#include <stdio.h>

/**
 * _flag_characters - applies correct flags to number based on specifier
 * @num: number to apply flags to
 * @specifier: format specifier
 * @flags: array of flags to apply
 */

void _flag_characters(int num, char specifier, char flags[])
{
	if (specifier == 'd' || specifier == 'i')
	{
		if (flags[0] == '+')
		{
			printf("%+d", num);
		}
		else if (flags[0] == ' ')
		{
			printf("% d", num);
		}
		else
		{
			printf("%d", num);
		}
	}
	else if (specifier == 'o')
	{
		if (flags[0] == '#')
		{
			printf("%#o", num);
		}
		else
		{
			printf("%o", num);
		}
	}
	else if (specifier == 'x' || specifier == 'X')
	{
		if (flags[0] == '#')
		{
			printf("%#x", num);
		}
		else
		{
			printf("%x", num);
		}
	}
	else
	{
		printf("Invalid specifier");
	}
}
