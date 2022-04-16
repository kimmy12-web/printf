#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * makeoctal - makes object into octal int
 * @ap: va_list object
 * Return: chars printed
 **/
int makeoctal(va_list *ap)
{
	return (p_octal(va_arg(*ap, unsigned int)));
}

/**
 * makehexstring - makes object into string
 * @ap: va_list object
 * Return: chars printed
 **/
int makehexstring(va_list *ap)
{
	return (p_hexstring(va_arg(*ap, char *)));
}

/**
 * makeunsigned - makes object into unsigned int
 * @ap: va_list object
 * Return: chars printed
 **/
int makeunsigned(va_list *ap)
{
	return (p_uint(va_arg(*ap, unsigned int)));
}

/**
 * makehexcap - makes object into hex with cap
 * @ap: va_list object
 * Return: chars printed
 **/
int makehexcap(va_list *ap)
{
	return (p_hexcap(va_arg(*ap, unsigned int)));
}
