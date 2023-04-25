#include "main.h"

/**
 * low_hex - prints a representation of a decimal number o base 16 lowercase
 * @num: number to be converted
 * Return: chars printed
 */

int low_hex(unsigned int num)
{
	int len, rem_num;
	char *hex_rep, *rev_hex;

	if (num == 0)
	{
		return (_putchar('0'));
	}
	if (num < 1)
	{
		return (-1);
	}

	len = oct_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
	{
		return (-1);
	}

	/*convert the decimal number to hex*/
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_rep[len] = rem_num;
		}
		else
		{
			hex_rep[len] = rem_num + 48;
		}
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
	{
		return (-1);
	}
	/*the reversed hex string is printed*/
	_write(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}
