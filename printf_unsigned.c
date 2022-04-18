#include "main.h"
/**
 * putchar_unsigned_int - putchar an unsigned number
 * @number: Number to be printed
 * @len: digits to be printed
 * Return: length
 */
int putchar_unsigned_int(unsigned int number, int len)
{
	if (number / 10)
	{
		len = putchar_unsigned_int(number / 10, len + 1);
	}
	_putchar(number % 10 + '0');
	return (len);
}
/**
 * _printf_unsigned_int - write an unsigned integer number
 * @arg: va_list of arguments
 * Return: length of unsigend number
 */

int _printf_unsigned_int(va_list *arg)
{
	int len = 0, neg = 0;
	unsigned int number = va_arg(*arg, unsigned int);

	len = putchar_unsigned_int(number, len) + neg + 1;
	return (len);
}
