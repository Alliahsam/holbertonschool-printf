#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - copies printf function
 * @format: string to print
 * Return: y
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;

            if (*format == 'c') {
                char c = (char)va_arg(args, int);
                putchar(c);
                count++;
            }

            else if (*format == 's') {
                char *s = va_arg(args, char *);

                while (*s != '\0') {
                    putchar(*s);
                    s++;
                    count++;
                }
            }

            else if (*format == '%') {
                putchar('%');
                count++;
            }
        }

        else {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;

}
