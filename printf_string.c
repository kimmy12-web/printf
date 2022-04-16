#include "main.h"
/**
* _printf_string - Print the string
* @arg: va_list
* Return: return pointer
*/

int _printf_string(va_list *arg)
{
	int len = 0;
	char *str = va_arg(*arg, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}

	return (len);
}
