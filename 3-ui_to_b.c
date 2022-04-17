#include "main.h"
#include <stdio.h>
/**
  * to_base_len - len of dec nums converted to base
  * @n: num of which we want len
  * @base: convert to base from DEC
  *
  * Return: len
  */
unsigned int to_base_len(unsigned int n, int base)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
		n = n / base;
	return (i);
}
/**
  * _cpy - copy n bytes from src to dest
  * @dest: destination
  * @src: source
  * @n: num of bytes
  *
  * Return: ptr to char
  */
char *_cpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
  * reverse - reverse string
  * @s: str to reverse
  *
  * Return: ptr to char
  */
char *reverse(char *s)
{
	int i, j;
	char hld;
	char *dest;

	for (i = 0; s[i] != '\0'; i++)
		;
	dest = malloc(sizeof(char) * i + 1);
	if (dest == NULL)
		return (NULL);
	_cpy(dest, s, i);
	for (j = 0; j < i; j++, i--)
	{
		hld = dest[i - 1];
		dest[i - i] = dest[j];
		dest[j] = hld;
	}
	return (dest);
}
/**
  * _write_str - display sequence of chars
  * @s: sequence to be displayed
  */
void _write_str(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_write_ch(s[i]);
}
/**
  * print_to_bin - convert to binary
  * @list: list of args
  *
  * Return: len of num we are converting to bin
  */
int print_to_bin(va_list list)
{
	unsigned int n;
	int i, ln;
	char *rev;
	char *s;

	n = va_arg(list, unsigned int);
	if (n == 0)
		return (_write_ch('0'));
	if (n < 1)
		return (-1);
	ln = to_base_len(n, 2);
	s = malloc(sizeof(char) * ln + 1);
	if (s == NULL)
		return (-1);
	for (i = 0; n > 0; i++)
	{
		if (n % 2 == 0)
			s[i] = '0';
		else
			s[i] = '1';
		n /= 2;
	}
	s[i] = '\0';
	rev = reverse(s);
	if (rev == NULL)
		return (-1);
	_write_str(rev);
	free(s);
	free(rev);
	return (ln);
}
