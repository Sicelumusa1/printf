#include "main.h"

/**
 * uppr_hex - print an hexadecimal number
 * @num: the arg
 * Return: counter
 */

int uppr_hex(unsigned long int num)
{
	unsigned long int index = 0, counter = 0;
	unsigned long int *array;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
	}
	counter++;
	array = malloc(counter * sizeof(unsigned long int));

	while (index < counter)
	{
		array[index] = temp % 16;
		temp /= 16;
		index++;
	}
	index = counter - 1;

	while (index)
	{
		if (array[index] > 9)
		{
			array[index] = array[index] + 39;
		}
		_putchar(array[index] + '0');
		index--;
	}
	free(array);
	return (counter);

}