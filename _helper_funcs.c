#include "main.h"

/**
 * _write - output chars to stdout
 * @str: the str to loop over
 */
void _write(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
}

/**
 * oct_len - calculates the length for an octal number
 * @num: number for which length is calculatet
 * @base: base to calculate
 * Return: int representing the length
 */

unsigned int oct_len(unsigned int num, int base)
{
	unsigned int index = 0;

	while (num > 0)
	{
		num = num / base;
		index++;
	}
	return (index);
}

/**
 * mem_cpy - copy memory area
 * @dest: placeholder for copying
 * @src: to copy from
 * @num: No. of bytes to copy
 * Return: pointer to dest
 */

char *mem_cpy(char *dest, char *src, unsigned int num)
{
	unsigned int index = 0;

	for (index < num)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/**
 * rev_string - reverses a string in place
 * @str: string to reverse
 * Return: pointer to character
 */

char *rev_string(char *str)
{
	int len, head;
	char tmp;
	char *dest;

	for (len = 0; str[len] != '\0'; len++)
	{}
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	mem_cpy(dest, str, len);

	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] tmp;
	}
	return (dest);
}

/**
 * hex_check - checks which hex function is calling it
 * @num: number to convert
 * @x: signals which hex function is calling it
 * Return: the ASCII value for a letter
 */

int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
	{
		return (hex[num]);
	}
	else
	{
		return (Hex[num]);
	}
	return (0);
}

