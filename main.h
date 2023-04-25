#ifndef MAIN_FILE_H
#define MAIN_FILE_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>

/**
 * _printf - a function that produces output according to a format.
 * @format: is a character string.
 * Return: the number of characters printed
 */

/*list of function prototypes*/
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int _output_unsigned_integer(unsigned int num);
int _output_unsigned_assist(unsigned int num);
int _output_rev(char *str);
int _strlen(va_list args);
int _output_rot13(char *str, int len);
void _write(char *str);
unsigned int oct_len(unsigned int num, int base);
char *mem_cpy(char *dest, char *src, unsigned int num);
char *rev_string(char *str);
int hex_check(int num, char x);
int _output_oct(unsigned int num);
int uppr_hex(unsigned long int num);
int low_hex(unsigned int num);

void print_binary(unsigned int x);
int print_binary_custom(const char *format, unsigned int x);
void handle_length_modifiers(char modifier, char conversion_specifier, ...);
void _flag_characters(int num, char specifier, char flags[]);
int get_precision(const char *format, int *i, va_list lst);
int get_width(const char *format, int *i, va_list lst);
void handle_custom_specifier_r(char *buffer, int *i, int buf_size, va_list lst);
void handle_field_width(const char *format, int *i, va_list lst, char *width);
void handle_zero_flag(char *buffer, int *i, int buf_size, int width, int precision,
		int _isnegative);
void handle_precision(const char *format, int *i, va_list lst, int *precision);
void handle_minus_flag(char *buffer, int *i, int buf_size,
                int width, int str_len, int _isnegative);
int _isdigit(int c);
int _print_int(int num);
int print_non_printable(va_list args, char buffer[], int flags, int width, int precision, int size);
int is_printable(char c);
int print_pointer(va_list args,char buffer[], int flags, int width, int precision, int size);
int write_formatted(char buffer[], int flags, int width, int length, char extra_c);
#endif
