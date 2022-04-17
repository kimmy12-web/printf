#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct fmt - function to check for formats
 * @type: The format to print
 * @f: The print function to use
 */
typedef struct fmt
{
	char *type;
	int (*f)();
} fmt_t;

int _printf(const char *format, ...);
<<<<<<< HEAD
int print_op(const char *format, fmt_t *print_arr, va_list list);
int ch(va_list character);
int str(va_list string);
int _int(va_list integ);
int _ui(va_list unsign);
int _oct(va_list octo);
int _rot13(va_list rot);
int _hex_str(unsigned int n, unsigned int hex, char alpha);
int _hex_l(va_list hexa);
int _hex_u(va_list hexa);
int _strlen(char *s);
int _bin(va_list bin);
int _putchar(char c);
#endif
=======

/*New prototypes for printf acording a format*/
int _printf_char(va_list *);
int charsFormats(const char *format, va_list args);
int _printf_string(va_list *);
int _printf_int(va_list *);
int _printf_unsigned_int(va_list *);
int _printf_double(va_list *);
int _printf_octal(va_list *);
int _printf_hexa(va_list *);
int _printf_mini_hexa(va_list *);
int _printf_binary(va_list *);
int _printf_special(va_list *);
int _rot13(va_list rot);
int _printf_reverse(va_list *);

#endif /*MAIN_H*/
>>>>>>> c4669034be233364c920b5515b79f9d7bd699c63
