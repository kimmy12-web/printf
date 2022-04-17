#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* va_list, va_start, va_end, va_arg, va_copy*/
#include <stddef.h> /*typedef*/
/**
 * struct printer - Define structure of data
 * according to give a printf.
 *
 * @format:format of data.
 * @func: pointer to a function.
*/

typedef struct printer
{
	char format;
	int (*func)(va_list *);
} printer_t;

/*Old functions that can help us*/
int _putchar(char c);

/*Function for select a function acording a format*/
printer_t choose_func(char format);

/*Principal Prootype*/
int _printf(const char *format, ...);

/*New prototypes for printf acording a format*/
int _printf_char(va_list *);
int _printf_string(va_list *);
int _printf_int(va_list *);
int _printf_unsigned_int(va_list *);
int _printf_double(va_list *);
int _printf_octal(va_list *);
int _printf_hexa(va_list *);
int _printf_mini_hexa(va_list *);
int _printf_binary(va_list *);
int _printf_special(va_list *);
int _printf_rot13(va_list *params);
int _printf_reverse(va_list *);
int _write_ch(char);
int print_fmtd(const char *format, fts list[], va_list ap);
int print_ch(va_list);
int print_str(va_list);
int print_pcnt(va_list);
void _write_str(char *str);
unsigned int to_base_len(unsigned int n, int base);
char *reverse(char *s);
char *_cpy(char *dest, char *src, unsigned int n);
int print_to_bin(va_list list);
#endif /*MAIN_H*/
