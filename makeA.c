#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * makestring - makes object into string
 * @ap: va_list object
 * Return: chars printed
 **/
int makestring(va_list *ap)
{
	return (p_string(va_arg(*ap, char *)));
}

/**
 * makeint - makes object into int
 * @ap: va_list object
 * Return: digits printed
 **/
int makeint(va_list *ap)
{
	return (p_int(va_arg(*ap, int)));
}

/**
 * makechar - makes object into char
 * @ap: va_list object
 * Return: chars printed
 **/
int makechar(va_list *ap)
{
	return (_putchar(va_arg(*ap, int)));
}

/**
 * makebin - makes object into int, print as binary
 * @ap: va_list object
 * Return: chars printed
 **/
int makebin(va_list *ap)
{
	return (p_bin(va_arg(*ap, unsigned int)));
}

/**
 * makehex - makes object into string, print ascii for non-printable
 * @ap: va_list object
 * Return: chars printed
 **/
int makehex(va_list *ap)
{
	return (p_hex(va_arg(*ap, int)));
}
