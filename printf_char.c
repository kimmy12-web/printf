#include "main.h"

/**
 * _printf_char - print formated of char
 * @arg: va_list of arguments
 * Return: 1 always
 *
 */

int _printf_char(va_list *arg)
{
	char ch;

	ch = va_arg(*arg, int);

	_putchar(ch);
	return (1);
}
