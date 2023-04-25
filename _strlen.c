#include "main.h"

/**
 * _strlen - gets the length of the str
 * Return: returns the length of the string
 * @args: the string argument from the va_list
 */

int _strlen(va_list args)
{
    char *str = va_arg(args, char *);
    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }
    return (len);
}
