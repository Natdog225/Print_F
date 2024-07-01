#include "main.h"

/**
 * Checking for the s, c. % is handled in the _printf
 */

/** handling the string %s func */

int handle_string(va_list args)
{
	char *str = va_arg(args char *); /* gets the string argument*/
	int i; /*loop counter*/

	if (str == NULL)
		str = "(null)"; /*handles the null string*/
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]); /* print the character at the array address*/

	return (i); /*returns the number of printed characters*/
}

/**
 * Handling the %c char stuff
 */

int handle_char(va_list args)
{
	char c = va_arg(args, int); /* pulls in the character argument*/
	_putchar(c); /* prints the character*/
	return (1); /* Returns the number of printed characters.*/
}
