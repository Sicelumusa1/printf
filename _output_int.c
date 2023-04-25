#include "main.h"

/**
 * _print_int - a function that prints an integer to stdout
 * Return: the number of characters printed
 * @num: the list of arguments
 */

int _print_int(int num)
{
	int is_negative = num < 0 ? 1 : 0;
	unsigned int num_u = is_negative ? -num : num;
	char *str;
	int i, j, k, len = 0;
	char tmp;

	/* the number of digits are counted*/
	i = num_u;
	while (i > 0)
	{
		len++;
		i /= 10;
	}
	/* add an extra digit*/
	if (is_negative)
	{
		len++;
	}
	str = malloc(len + 1);

	/* convert the number to a string */
	for (i = num_u, j = 0; i > 0; i /= 10, j++)
	{
		str[j] = i % 10 + '0';
	}
	if (is_negative)
	{
		str[j++] = '-';
	}
	str[j] = '\0';

	/*the string is reversed*/
	for (k = 0, j--; k < j; k++, j--)
	{
		tmp = str[k];
		str[k] = str[j];
		str[j] = tmp;
	}
	/* print the string */
	len = _puts(str);
	free(str);
	return (len);
}
