#ifndef PRINT_F
#define PRINT_F
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void print_specifier(va_list aq, char spec, int *len);
void print_int(int num, int *len);

#endif /* PRINT_F */
