#include "main.h"
/**
 * base16_m - print number in base 16
 * @number: Number to be printed
 * @len: digits to be printed
 * Return: length
 */
int base16_m(unsigned int number, int len)
{
	if (number / 16)
	{
		len = base16_m(number / 16, len + 1);
	}
	if (number % 16 < 10)
	{
		_putchar(number % 16 + 48);
	}
	else
	{
		_putchar(number % 16 + 87);
	}
	return (len);
}
/**
 * _printf_mini_hexa - print a decimal number to hexadecimal
 * @arg: va_list of arguments
 * Return: length of number in binary
 *
 */

int _printf_mini_hexa(va_list *arg)
{
	int len = 0, neg = 0;
	unsigned int number = va_arg(*arg, unsigned int);

	len = base16_m(number, len) + neg + 1;
	return (len);
}
