#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: pointer to argument giver to printf
 * Return: len of data give to printf
 */
int _printf(const char *format, ...)/*"Hello: %i, %c, %s", 45, H, world*/
{
	va_list argument;
	int i = 0, state = 1, len = 0;
	printer_t select_func;

	if ((format == NULL) || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}

	va_start(argument, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			if (state)
			{
			len += _putchar(format[i]);
			}
			else
			{
				select_func = choose_func(format[i]);
				if (select_func.format != '*')
				{
					len += select_func.func(&argument);
				}
				else
				{
					len += _putchar('%') + _putchar(format[i]);
				}
				state = 1;
			}
		}
		else
		{
			if (state)
			{
				state = 0;
			}
			else
			{
				len += _putchar(format[i]);
				state = 1;
			}
		}
		i++;
	}
	va_end(argument);
	return (len);
}
