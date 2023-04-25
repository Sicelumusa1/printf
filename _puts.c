#include "main.h"

/**
 * _puts - a function that prints string
 * Return: it returns the str to print.
 * @str: the str to print
 */

int _puts(char *str)
{
	int index, counted_chars = 0;

	/*loop over the str*/
	for (index = 0; str[index]; index++)
	{
		/*call _putchar to print curr char and increment the count*/
		counted_chars += _putchar(str[index]);
	}

	/*return count of characters printed*/
	return (counted_chars);
}
