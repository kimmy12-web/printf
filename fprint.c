#include "main.h"
/**
  * _write_ch - write to stdoutput series
  * @ch: para
  *
  * Return: int
  */
int _write_ch(char ch)
{
	return (write(1, &ch, sizeof(char)));
}
/**
  * print_ch - print char
  * @list: list of args
  *
  * Return: int
  */
int print_ch(va_list list)
{
	_write_ch(va_arg(list, int));
	return (1);
}
/**
  * print_str - print string
  * @list: list of args
  *
  * Return: int
  */
int print_str(va_list list)
{
	int i;
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_write_ch(s[i]);
	return (i);
}
/**
  * print_pcnt - print %
  * @list: list of args
  *
  * Return: int
  */
int print_pcnt(__attribute__((unused))va_list list)
{
	_write_ch('%');
	return (1);
}
