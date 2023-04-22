#ifndef MAIN_FILE_H
#define MAIN_FILE_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - a function that produces output according to a format.
 * @format: is a character string.
 * Return: the number of characters printed
 */

/*list of function prototypes*/
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
#endif
