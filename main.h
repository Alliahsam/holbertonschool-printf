#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdstring.h>
#include <limits.h>

/**
 * Struct func-type-type structure
 * @t: pointer to argument
 * @f: pointer - function associated with arguments
 */
typedef struct func-type
{
	char *int _printf(const char *format, ...);t;
	int (*f)(va_list);
}func_t;
int _putchar(char c);
int _printf(const char *format, ...);
int (* get_func(const char * format))(va_list);

#endif

