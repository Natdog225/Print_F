#include <stdarg.h>
/**
 * my_printf - Im not sure how much clearer the title of the program could be.
 * It prints things.
 *
 * @format: The format string
 *
 * Return: The number of characters printed.
 */
int my_printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i = 0;

	va_start(args, format);
	while (format[i] != '\0')
	{}
