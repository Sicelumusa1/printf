#include "main.h"

/**
 * _output_rot13 - outputs a string using rot13
 * Return: length of the printed string
 * @str: the string to be printed
 * @len: the length of the string
 */

int _output_rot13(char *str, int len)
{
	int index = 0;
	int x;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
	{
		return (-1);
	}
	while (index < len)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[index] == s[x])
			{
				_putchar(u[x]);
				break;
			}
		}
		if (x == 53)
		{
			_putchar(str[index]);
		}
		index++;
	}
	return (index);
}
