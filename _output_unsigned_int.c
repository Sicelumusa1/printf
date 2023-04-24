#include "main.h"

/**
 * _output_unsigned_integer - a function that prints Unsigned integers
 * @num: Unsigned integer to be printed
 * Return: A count of the numbers
 */

int _output_unsigned_integer(unsigned int num)
{
	if (num == 0)
	{
		return (_output_unsigned_assist(num));
	}

	if (num < 1)
	{
		return (-1);
	}
	return (_output_unsigned_assist(num));
}

/**
 * _output_unsigned_assist - a function that assists output unsigned integer
 * @num: unsigned integer to be printed
 * Return: Amount of numbers printed
 */

int _output_unsigned_assist(unsigned int num)
{
	unsigned int num_0 = num;
	unsigned int divisor = 1;
	int len = 0;

	/*get the largest place value */
	while (num / divisor > 9)
	{
		divisor *= 10;
	}

	/*numbers are printed individually from largest place value*/
	while (divisor != 0)
	{
		len += _putchar('0' + num_0 / divisor);
		num_0 %= divisor;
		divisor /= 10;
	}
	return (len);
}
