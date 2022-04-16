#include "main.h"
/**
 * base8 - putchar to a unsigned number to base 8
 * @number: Number to be printed
 * @len: digits to be printed
 * Return: length
 */
int base8(unsigned int number, int len)
{
	if (number / 8)
	{
		len = base8(number / 8, len + 1);
	}
	_putchar(number % 8 + '0');
	return (len);
}
/**
 * _printf_octal - print a unsigned number to base 8
 * @arg: va_list of arguments
 * Return: length of number in binary
 *
 */

int _printf_octal(va_list *arg)
{
	int len = 0, neg = 0;
	unsigned int number = va_arg(*arg, unsigned int);

	len = base8(number, len) + neg + 1;
	return (len);
}
