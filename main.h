#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

/**
 * Struct func-type - type of structure
 * Struct func-type-type of structure
 * @t: pointer to argument
 * @f: pointer - function associated with argumentis
 */
typedef struct func_type
{
  char *t;
  int (*f)(va_list);
} func_t;

int (*get_func(const char *format))(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
int print_string(va_list args);
int print_char(va_list args);
int print_pctent(va_list args);
int print_decimal(va_list args);

#endif
