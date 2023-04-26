#ifndef PRINT_F
#define PRINT_F

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct op - struct op
 * @s: t - flag for data type
 * @f: function - associated function
 */
typedef struct op
{
	char s;
	void (*f)(va_list, int *);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
void handle_char(va_list, int *);
void handle_string(va_list, int *);

#endif /* PRINT_F */
