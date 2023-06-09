#include "main.h"

/**
 * get_func - check for valid specifier
 * @format: a character to check
 * Return: a pointer to the function
 */
int (*get_func(const char *format))(va_list)
{
	int i;
	func_t p[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_pctent},
	{"d", print_decimal},
	{"i", print_decimal},
	{NULL, NULL}
	};

	for (i = 0; p[i].t; i++)
	{
	if (*format == *(p[i].t))
	{
	return (p[i].f);
	}
	}
	return (NULL);

}
