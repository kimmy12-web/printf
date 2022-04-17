#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
/**
  * struct fmtspec - format specifiers
  *
  * @flag: c, s, f, d ...
  * @fptr: function pointer
  */
struct fmtspec
{
	char *flag;
	int (*fptr)(va_list);
};
typedef struct fmtspec fts;

int _printf(const char *format, ...);
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

#endif
