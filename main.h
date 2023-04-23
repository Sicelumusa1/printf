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
void print_binary(unsigned int x);
int print_binary_custom(const char *format, unsigned int x);
void handle_length_modifiers(char modifier, char conversion_specifier, ...);
void _flag_characters(int num, char specifier, char flags[]);
int get_precision(const char *format, int *i, va_list lst);
int get_width(const char *format, int *i, va_list lst);
void handle_custom_specifier_r(char *buffer, int *i, int buf_size, va_list lst);
void handle_field_width(const char *format, int *i, va_list lst, char *width);
void handle_zero_flag(char *buffer, int *i, int width);
void handle_precision(const char *format, int *i, va_list lst, int *precision);
void handle_minus_flag(char *buffer, int *i, int buf_size,
                int width, int precision, int _isnegative);
int _isdigit(int c);
#endif
