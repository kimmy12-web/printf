#include "main.h"
/**
 * base2 - print a unsigned number to binary
 * @number: Number to be printed
 * @len: digits to be printed
 * Return: length
 */
int base2(unsigned int number, int len)
{
	if (number / 2)
	{
		len = base2(number / 2, len + 1);
	}
	_putchar(number % 2 + '0');
	return (len);
}
/**
 * _printf_binary - print a unsigned number to binary
 * @arg: va_list of arguments
 * Return: length of number in binary
 *
 */

int _printf_binary(va_list *arg)
{
	int len = 0, neg = 0;
	unsigned int number = va_arg(*arg, unsigned int);

	len = base2(number, len) + neg + 1;
	return (len);
}
