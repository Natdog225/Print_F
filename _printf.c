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

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;
			if (format[i] == 'c')
			{
				count += handle_char(args);
			}
			else if (format[i] == 's')
			{
				count += handle_string(args);
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				count += handle_int(args);
			}
			else if (format[i] == '%')
			{
				count += _putchar('%');
			}
			else if (format[i] == 'r')
			{
				count += handle_r(args);
			}
				else
				{
					count += _putchar('%');
					count += _putchar(format[i]);
				}
			}
			else
			{
				count += _putchar(format[i]);
			}

			i++;
		}

		va_end(args);
		return (count);
	}
