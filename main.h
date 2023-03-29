#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

/**
 * Struct func-type-type of structure
 * @t: pointer to argument
 * @f: pointer - function associated with arguments
 */
typedef struct func_type
{
        char;
        int (f) (va_list);
}func_t;
int (get_func(const char format))(va_list);
int _putchar(char c);
int _printf(const charformat, ...);
int print_str(va_list args);
int print_char(va_list args);
int print_pct(va_list args);
int print_dec(va_list args)

#endif
