#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD

=======
>>>>>>> cfb40f813ce9cb9755df9cb411d79257b842d215
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

/**
<<<<<<< HEAD
 * Struct func-type - type of structure
=======
 * Struct func-type-type of structure
>>>>>>> cfb40f813ce9cb9755df9cb411d79257b842d215
 * @t: pointer to argument
 * @f: pointer - function associated with argumentis
 */
typedef struct func_type
{
<<<<<<< HEAD
  char *t;
  int (*f)(va_list);
} func_t;

int (*get_func(const char *format))(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
int print_string(va_list args);
int print_char(va_list args);
int print_pctent(va_list args);
int print_decimal(va_list args)

#endif /* MAIN_H*/
=======
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
>>>>>>> cfb40f813ce9cb9755df9cb411d79257b842d215
