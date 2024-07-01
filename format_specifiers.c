#include "main.h"

/**
 * Checking for the s, c. % is handled in the _printf
 */

/**
 * handle_string - Handles the %s format specifier
 * @args: va_list containing the string to print
 *
 * Return: The number of characters printed
 */

int handle_string(va_list args)
{
	char *str = va_arg(args, char *); /* gets the string argument*/
	int i; /*loop counter*/

	if (str == NULL)
		str = "(null)"; /*handles the null string*/
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]); /* print the character at the array address*/

	return (i); /*returns the number of printed characters*/
}

/**
 * handle_char - Handles the %c format specifier
 * @args: va_list containing the character to print
 *
 * Return: The number of characters printed
 */

int handle_char(va_list args)
{
	char c = va_arg(args, int); /* pulls in the character argument*/
	_putchar(c); /* prints the character*/
	return (1); /* Returns the number of printed characters.*/
}

/**
 * handle_int - Handles the %d and %i format specifiers
 * @args: va_list containing the integer to print
 *
 * Return: The number of characters printed
 */

int handle_int(va_list args)
{
	int num = va_arg(args, int); /* gets the integer argument from va_list*/
	unsigned int num_abs;
	char buffer[40]; /* buffer to hold string rep of the int*/
	int i = 0, j, count = 0;

	if (num == 0) /*if the in is 0, print 0 and return1*/
	{
		_putchar('0');
		return (1);
	}

	if (num < 0) /* handles the negative ints by printing -, makes the num positve */
	{
		_putchar('-');
		if (num == INT_MIN)
		{
			num_abs = ((unsigned int)(INT_MAX) + 1); /*handles the INT_MIN special*/
		}
		else
		{
			num_abs = -num;
		}
		count++;
	}
	else
	{
		num_abs = num;
	}

	while (num != 0) /*convert the int to a string in reverse order*/
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}
	for (j = i -1; j >= 0; j--) /* print the string in correct order*/
	{
		_putchar(buffer[j]);
		count++;
	}
	return (count); /*return the number of printed char, includes negative sign if present*/
}
