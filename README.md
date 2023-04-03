README.md

C - printf

Project Requirements

• All files will be compiled on Ubuntu 20.04 LTS
• Code must follow the Betty style
• Global variables are not allowed
• Authorized functions and macros:

• write (man 2 write)
• malloc (man 3 malloc)
• free (man 3 free)
• va_start (man 3 va_start) o va_end (man 3 va_end)
• va_copy (man 3 va_copy) o va_arg (man 3 va_arg)

Mandatory Tasks

• Write function that produces output with conversion specifiers c, s, and %.
• Handle conversion specifiers d, i.
• Create a man page for your function

File Descriptions

• _printf.c: - contains the function _printf, which uses the prototype int _printf(const char *format, ...);. The format string is composed of zero or more directives. See man 3 printf for more detail. _printf will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to stdout, the standard output stream.
• _putchar.c: - contains the function _putchar, which writes a character to stdout.
• main.h: - contains all function prototypes used for _printf.
• man_3_printf: - manual page for the custom _printf function.
• printf_dec.c: - takes a variable integer, calculates its absolute value, prints each digit using _putchar to display the number on the standard output, and returns the number of printed characters.
• functions.c: - contains three functions that allow printing characters, strings, and the '%' character on the standard output using 'va_list' arguments.
• get_func.c: - contains function definition of get_func and determines which printing function to call based on the conversion specification passed as an argument.

![flowchart](https://user-images.githubusercontent.com/79006648/229448712-211d2c42-b93b-43b1-ad90-885bcbd1dc87.png)



Samira Ouled
Ericka Carmella Ny Fitahiana  
Sabrina Papeau 

