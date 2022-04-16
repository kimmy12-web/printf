#include "main.h"

/**
 * len_i - find length to integer
 * @i: The number to get the length
 * @len: The number length
 * Return: length int
 */
int len_i(unsigned int i, int len)
{
	while (i / 10)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

/**
 * repeat - prints recursively
 * @i: number to be print
 * Return: nothing.
 */
void repeat(unsigned int i)
{
	if (i / 10)
	{
		repeat(i / 10);
	}
	_putchar(i % 10 + '0');
}
/**
* _printf_int - Print format int
* @arg: int in va_list
* Return: String to print
*/
int _printf_int(va_list *arg)
{
	int integer = 0, len = 0, neg = 0;
	unsigned int limit;

	integer = va_arg(*arg, int);
	if (integer < 0)
	{
		_putchar('-');
		limit = -integer;
		neg = 1;
	}
	else
	{
		limit = integer;
	}
	len += len_i(limit, len);
	repeat(limit);
	len += neg + 1;
	return (len);
}
