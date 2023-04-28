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
	int (*f)(va_list ap, char *buffer,  int b_count);
} op_t;

int _printf(const char *format, ...);
int handle_char(va_list ap, char *buffer,  int b_count);
int handle_string(va_list ap, char *buffer,  int b_count);
int handle_int(va_list ap, char *buffer,  int b_count);
int parse_int(int num, char *buffer,  int b_count);
int handle_percent(va_list ap, char *buffer,  int b_count);
int print_buffer(char *buffer, int b_count);
int handle_bin(va_list ap, char *buffer,  int b_count);
void convert_binary(char *bin, int *b, int n);

#endif /* PRINT_F */
