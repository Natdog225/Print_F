#include "main.h"

/**
 * _printf - Im not sure how much clearer the title of the program could be.
 * It prints things.
 *
 * @format: The format string
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i = 0;

	if (format == NULL) /* Check for NULL format string */
		return (-1);

	va_start(args, format); /* Initialize variable arguments */

	while (format[i] != '\0') /* Loop through format string */
	{
		if (format[i] == '%') /* Check for format specifier */
		{
			i++;
			if (format[i] == '\0') /* Handle unexpected end of format string */
			{
				va_end(args);
				return (-1);
			}

			if (format[i] == 'c')
			{
				count += handle_char(args); /* Handle character specifier */
			}
			else if (format[i] == 's')
			{
				count += handle_string(args); /* Handle string specifier */
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				count += handle_int(args); /* Handle integer specifiers */
			}
			else if (format[i] == '%')
			{
				count += _putchar('%'); /* Print literal '%' */
			}
			else if (format[i] == 'r') /* Added to catch reverse string specifier*/
			{
				count += handle_r(args);
			}
			else
			{
				count += _putchar('%');		  /*Prints a literal '%'*/
				count += _putchar(format[i]); /* Prints any other specifier as a literal */
			}
		}
		else
		{
			count += _putchar(format[i]); /* Print non-specifier character */
		}

		i++;
	}

	va_end(args); /* Clean up variable arguments */
	return (count);
}
