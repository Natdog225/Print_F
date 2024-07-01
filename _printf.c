#include "main.h"
/**
 * my_printf - Im not sure how much clearer the title of the program could be.
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

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				i++;
				if (format[i] == 'c')
				{
					count += _putchar(va_arg(args, int));
				}
				else if (format[i] == 's')
				{
					char *str = va_arg(args, char *);
					if (str == NULL)
						str = "(null)";
					while (*str != '\0')
					{
						count += _putchar(*str++);
					}
				}
				else if (format[i] == 'd')
				{
					count += handle_int(args);
				}
				else if (format[i] == '%')
				{
					count += _putchar('%');
				}
				else
				{
					count += _putchar('%');
					count += _putchar(format[i]);
				}

				i++;
			}
			else
			{
				count += _putchar(format[i]);
				i++;
			}
		}
	}

	va_end(args);
	return (count);
}
