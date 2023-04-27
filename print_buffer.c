#include "main.h"

/**
 * print_buffer - this function prints the final output string
 * stored in the buffer
 * @buffer: pointer to the buffer
 * @b_count: the length of the buffer
 *
 * Return: the length of the buffer
*/

int print_buffer(char *buffer, int b_count)
{
	return (write(1, buffer, b_count));
}
